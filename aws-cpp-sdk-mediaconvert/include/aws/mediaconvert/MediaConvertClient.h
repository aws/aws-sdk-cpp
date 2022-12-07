/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/MediaConvertServiceClientModel.h>

namespace Aws
{
namespace MediaConvert
{
  /**
   * AWS Elemental MediaConvert
   */
  class AWS_MEDIACONVERT_API MediaConvertClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaConvertClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::MediaConvert::MediaConvertClientConfiguration& clientConfiguration = Aws::MediaConvert::MediaConvertClientConfiguration(),
                           std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG),
                           const Aws::MediaConvert::MediaConvertClientConfiguration& clientConfiguration = Aws::MediaConvert::MediaConvertClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConvertClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG),
                           const Aws::MediaConvert::MediaConvertClientConfiguration& clientConfiguration = Aws::MediaConvert::MediaConvertClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConvertClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaConvertClient();

        /**
         * Associates an AWS Certificate Manager (ACM) Amazon Resource Name (ARN) with AWS
         * Elemental MediaConvert.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AssociateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCertificateOutcome AssociateCertificate(const Model::AssociateCertificateRequest& request) const;

        /**
         * A Callable wrapper for AssociateCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateCertificateOutcomeCallable AssociateCertificateCallable(const Model::AssociateCertificateRequest& request) const;

        /**
         * An Async wrapper for AssociateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobTemplateOutcomeCallable CreateJobTemplateCallable(const Model::CreateJobTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreatePreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresetOutcomeCallable CreatePresetCallable(const Model::CreatePresetRequest& request) const;

        /**
         * An Async wrapper for CreatePreset that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQueueOutcomeCallable CreateQueueCallable(const Model::CreateQueueRequest& request) const;

        /**
         * An Async wrapper for CreateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Permanently delete a job template you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTemplateOutcome DeleteJobTemplate(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobTemplateOutcomeCallable DeleteJobTemplateCallable(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobTemplateAsync(const Model::DeleteJobTemplateRequest& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Permanently delete a policy that you created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Permanently delete a preset you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePreset">AWS
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
         * Permanently delete a queue you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const Model::DeleteQueueRequest& request) const;

        /**
         * An Async wrapper for DeleteQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateCertificateOutcomeCallable DisassociateCertificateCallable(const Model::DisassociateCertificateRequest& request) const;

        /**
         * An Async wrapper for DisassociateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the JSON for a specific job template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobTemplateOutcome GetJobTemplate(const Model::GetJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobTemplateOutcomeCallable GetJobTemplateCallable(const Model::GetJobTemplateRequest& request) const;

        /**
         * An Async wrapper for GetJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobTemplateAsync(const Model::GetJobTemplateRequest& request, const GetJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the JSON for your policy.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the JSON for a specific preset.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPreset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPresetOutcome GetPreset(const Model::GetPresetRequest& request) const;

        /**
         * A Callable wrapper for GetPreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPresetOutcomeCallable GetPresetCallable(const Model::GetPresetRequest& request) const;

        /**
         * An Async wrapper for GetPreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPresetAsync(const Model::GetPresetRequest& request, const GetPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the JSON for a specific queue.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueOutcome GetQueue(const Model::GetQueueRequest& request) const;

        /**
         * A Callable wrapper for GetQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueueOutcomeCallable GetQueueCallable(const Model::GetQueueRequest& request) const;

        /**
         * An Async wrapper for GetQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListJobTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobTemplatesOutcomeCallable ListJobTemplatesCallable(const Model::ListJobTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListJobTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListPresets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPresetsOutcomeCallable ListPresetsCallable(const Model::ListPresetsRequest& request) const;

        /**
         * An Async wrapper for ListPresets that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueuesOutcomeCallable ListQueuesCallable(const Model::ListQueuesRequest& request) const;

        /**
         * An Async wrapper for ListQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the tags for a MediaConvert resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListTagsForResource">AWS
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
         * Create or change your policy. For more information about policies, see the user
         * guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/PutPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPolicyOutcome PutPolicy(const Model::PutPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPolicyOutcomeCallable PutPolicyCallable(const Model::PutPolicyRequest& request) const;

        /**
         * An Async wrapper for PutPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPolicyAsync(const Model::PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Modify one of your existing job templates.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobTemplateOutcome UpdateJobTemplate(const Model::UpdateJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobTemplateOutcomeCallable UpdateJobTemplateCallable(const Model::UpdateJobTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobTemplateAsync(const Model::UpdateJobTemplateRequest& request, const UpdateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Modify one of your existing presets.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePresetOutcome UpdatePreset(const Model::UpdatePresetRequest& request) const;

        /**
         * A Callable wrapper for UpdatePreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePresetOutcomeCallable UpdatePresetCallable(const Model::UpdatePresetRequest& request) const;

        /**
         * An Async wrapper for UpdatePreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePresetAsync(const Model::UpdatePresetRequest& request, const UpdatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Modify one of your existing queues.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueOutcome UpdateQueue(const Model::UpdateQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQueueOutcomeCallable UpdateQueueCallable(const Model::UpdateQueueRequest& request) const;

        /**
         * An Async wrapper for UpdateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQueueAsync(const Model::UpdateQueueRequest& request, const UpdateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaConvertEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaConvertClient>;
      void init(const MediaConvertClientConfiguration& clientConfiguration);

      MediaConvertClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaConvertEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaConvert
} // namespace Aws
