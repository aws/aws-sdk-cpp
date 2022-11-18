/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/MediaConvertServiceClientModel.h>
#include <aws/mediaconvert/MediaConvertLegacyAsyncMacros.h>

namespace Aws
{
namespace MediaConvert
{
  /**
   * AWS Elemental MediaConvert
   */
  class AWS_MEDIACONVERT_API MediaConvertClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * Associates an AWS Certificate Manager (ACM) Amazon Resource Name (ARN) with AWS
         * Elemental MediaConvert.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AssociateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCertificateOutcome AssociateCertificate(const Model::AssociateCertificateRequest& request) const;


        /**
         * Permanently cancel a job. Once you have canceled a job, you can't start it
         * again.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;


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
         * Create a new job template. For information about job templates see the User
         * Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobTemplateOutcome CreateJobTemplate(const Model::CreateJobTemplateRequest& request) const;


        /**
         * Create a new preset. For information about job templates see the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresetOutcome CreatePreset(const Model::CreatePresetRequest& request) const;


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
         * Permanently delete a job template you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTemplateOutcome DeleteJobTemplate(const Model::DeleteJobTemplateRequest& request) const;


        /**
         * Permanently delete a policy that you created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;


        /**
         * Permanently delete a preset you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePresetOutcome DeletePreset(const Model::DeletePresetRequest& request) const;


        /**
         * Permanently delete a queue you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;


        /**
         * Send an request with an empty body to the regional API endpoint to get your
         * account API endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;


        /**
         * Removes an association between the Amazon Resource Name (ARN) of an AWS
         * Certificate Manager (ACM) certificate and an AWS Elemental MediaConvert
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DisassociateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCertificateOutcome DisassociateCertificate(const Model::DisassociateCertificateRequest& request) const;


        /**
         * Retrieve the JSON for a specific completed transcoding job.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;


        /**
         * Retrieve the JSON for a specific job template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobTemplateOutcome GetJobTemplate(const Model::GetJobTemplateRequest& request) const;


        /**
         * Retrieve the JSON for your policy.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;


        /**
         * Retrieve the JSON for a specific preset.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPreset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPresetOutcome GetPreset(const Model::GetPresetRequest& request) const;


        /**
         * Retrieve the JSON for a specific queue.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueOutcome GetQueue(const Model::GetQueueRequest& request) const;


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
         * Retrieve a JSON array of up to twenty of your presets. This will return the
         * presets themselves, not just a list of them. To retrieve the next twenty
         * presets, use the nextToken string returned with the array.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListPresets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPresetsOutcome ListPresets(const Model::ListPresetsRequest& request) const;


        /**
         * Retrieve a JSON array of up to twenty of your queues. This will return the
         * queues themselves, not just a list of them. To retrieve the next twenty queues,
         * use the nextToken string returned with the array.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;


        /**
         * Retrieve the tags for a MediaConvert resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * Add tags to a MediaConvert queue, preset, or job template. For information about
         * tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


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
         * Modify one of your existing job templates.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobTemplateOutcome UpdateJobTemplate(const Model::UpdateJobTemplateRequest& request) const;


        /**
         * Modify one of your existing presets.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePresetOutcome UpdatePreset(const Model::UpdatePresetRequest& request) const;


        /**
         * Modify one of your existing queues.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueOutcome UpdateQueue(const Model::UpdateQueueRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaConvertEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MediaConvertClientConfiguration& clientConfiguration);

      MediaConvertClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaConvertEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaConvert
} // namespace Aws
