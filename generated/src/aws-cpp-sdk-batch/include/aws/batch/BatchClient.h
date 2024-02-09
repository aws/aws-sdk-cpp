/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/batch/BatchServiceClientModel.h>

namespace Aws
{
namespace Batch
{
  /**
   * <fullname>Batch</fullname> <p>Using Batch, you can run batch computing workloads
   * on the Amazon Web Services Cloud. Batch computing is a common means for
   * developers, scientists, and engineers to access large amounts of compute
   * resources. Batch uses the advantages of the batch computing to remove the
   * undifferentiated heavy lifting of configuring and managing required
   * infrastructure. At the same time, it also adopts a familiar batch computing
   * software approach. You can use Batch to efficiently provision resources d, and
   * work toward eliminating capacity constraints, reducing your overall compute
   * costs, and delivering results more quickly.</p> <p>As a fully managed service,
   * Batch can run batch computing workloads of any scale. Batch automatically
   * provisions compute resources and optimizes workload distribution based on the
   * quantity and scale of your specific workloads. With Batch, there's no need to
   * install or manage batch computing software. This means that you can focus on
   * analyzing results and solving your specific problems instead.</p>
   */
  class AWS_BATCH_API BatchClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BatchClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BatchClientConfiguration ClientConfigurationType;
      typedef BatchEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BatchClient(const Aws::Batch::BatchClientConfiguration& clientConfiguration = Aws::Batch::BatchClientConfiguration(),
                    std::shared_ptr<BatchEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BatchClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<BatchEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Batch::BatchClientConfiguration& clientConfiguration = Aws::Batch::BatchClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BatchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<BatchEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Batch::BatchClientConfiguration& clientConfiguration = Aws::Batch::BatchClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BatchClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BatchClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BatchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BatchClient();

        /**
         * <p>Cancels a job in an Batch job queue. Jobs that are in the
         * <code>SUBMITTED</code> or <code>PENDING</code> are canceled. A job
         * in<code>RUNNABLE</code> remains in <code>RUNNABLE</code> until it reaches the
         * head of the job queue. Then the job status is updated to
         * <code>FAILED</code>.</p>  <p>A <code>PENDING</code> job is canceled after
         * all dependency jobs are completed. Therefore, it may take longer than expected
         * to cancel a job in <code>PENDING</code> status.</p> <p>When you try to cancel an
         * array parent job in <code>PENDING</code>, Batch attempts to cancel all child
         * jobs. The array parent job is canceled when all child jobs are completed.</p>
         *  <p>Jobs that progressed to the <code>STARTING</code> or
         * <code>RUNNING</code> state aren't canceled. However, the API operation still
         * succeeds, even if no job is canceled. These jobs must be terminated with the
         * <a>TerminateJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CancelJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        Model::CancelJobOutcomeCallable CancelJobCallable(const CancelJobRequestT& request) const
        {
            return SubmitCallable(&BatchClient::CancelJob, request);
        }

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        void CancelJobAsync(const CancelJobRequestT& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::CancelJob, request, handler, context);
        }

        /**
         * <p>Creates an Batch compute environment. You can create <code>MANAGED</code> or
         * <code>UNMANAGED</code> compute environments. <code>MANAGED</code> compute
         * environments can use Amazon EC2 or Fargate resources. <code>UNMANAGED</code>
         * compute environments can only use EC2 resources.</p> <p>In a managed compute
         * environment, Batch manages the capacity and instance types of the compute
         * resources within the environment. This is based on the compute resource
         * specification that you define or the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">launch
         * template</a> that you specify when you create the compute environment. Either,
         * you can choose to use EC2 On-Demand Instances and EC2 Spot Instances. Or, you
         * can use Fargate and Fargate Spot capacity in your managed compute environment.
         * You can optionally set a maximum price so that Spot Instances only launch when
         * the Spot Instance price is less than a specified percentage of the On-Demand
         * price.</p>  <p>Multi-node parallel jobs aren't supported on Spot
         * Instances.</p>  <p>In an unmanaged compute environment, you can manage
         * your own EC2 compute resources and have flexibility with how you configure your
         * compute resources. For example, you can use custom AMIs. However, you must
         * verify that each of your AMIs meet the Amazon ECS container instance AMI
         * specification. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container_instance_AMIs.html">container
         * instance AMIs</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>. After you created your unmanaged compute environment, you can use the
         * <a>DescribeComputeEnvironments</a> operation to find the Amazon ECS cluster
         * that's associated with it. Then, launch your container instances into that
         * Amazon ECS cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_container_instance.html">Launching
         * an Amazon ECS container instance</a> in the <i>Amazon Elastic Container Service
         * Developer Guide</i>.</p>  <p>To create a compute environment that uses EKS
         * resources, the caller must have permissions to call
         * <code>eks:DescribeCluster</code>.</p>   <p>Batch doesn't
         * automatically upgrade the AMIs in a compute environment after it's created. For
         * example, it also doesn't update the AMIs in your compute environment when a
         * newer version of the Amazon ECS optimized AMI is available. You're responsible
         * for the management of the guest operating system. This includes any updates and
         * security patches. You're also responsible for any additional application
         * software or utilities that you install on the compute resources. There are two
         * ways to use a new AMI for your Batch jobs. The original method is to complete
         * these steps:</p> <ol> <li> <p>Create a new compute environment with the new
         * AMI.</p> </li> <li> <p>Add the compute environment to an existing job queue.</p>
         * </li> <li> <p>Remove the earlier compute environment from your job queue.</p>
         * </li> <li> <p>Delete the earlier compute environment.</p> </li> </ol> <p>In
         * April 2022, Batch added enhanced support for updating compute environments. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
         * compute environments</a>. To use the enhanced updating of compute environments
         * to update AMIs, follow these rules:</p> <ul> <li> <p>Either don't set the
         * service role (<code>serviceRole</code>) parameter or set it to the
         * <b>AWSBatchServiceRole</b> service-linked role.</p> </li> <li> <p>Set the
         * allocation strategy (<code>allocationStrategy</code>) parameter to
         * <code>BEST_FIT_PROGRESSIVE</code>, <code>SPOT_CAPACITY_OPTIMIZED</code>, or
         * <code>SPOT_PRICE_CAPACITY_OPTIMIZED</code>.</p> </li> <li> <p>Set the update to
         * latest image version (<code>updateToLatestImageVersion</code>) parameter to
         * <code>true</code>. The <code>updateToLatestImageVersion</code> parameter is used
         * when you update a compute environment. This parameter is ignored when you create
         * a compute environment.</p> </li> <li> <p>Don't specify an AMI ID in
         * <code>imageId</code>, <code>imageIdOverride</code> (in <a
         * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_Ec2Configuration.html">
         * <code>ec2Configuration</code> </a>), or in the launch template
         * (<code>launchTemplate</code>). In that case, Batch selects the latest Amazon ECS
         * optimized AMI that's supported by Batch at the time the infrastructure update is
         * initiated. Alternatively, you can specify the AMI ID in the <code>imageId</code>
         * or <code>imageIdOverride</code> parameters, or the launch template identified by
         * the <code>LaunchTemplate</code> properties. Changing any of these properties
         * starts an infrastructure update. If the AMI ID is specified in the launch
         * template, it can't be replaced by specifying an AMI ID in either the
         * <code>imageId</code> or <code>imageIdOverride</code> parameters. It can only be
         * replaced by specifying a different launch template, or if the launch template
         * version is set to <code>$Default</code> or <code>$Latest</code>, by setting
         * either a new default version for the launch template (if <code>$Default</code>)
         * or by adding a new version to the launch template (if <code>$Latest</code>).</p>
         * </li> </ul> <p>If these rules are followed, any update that starts an
         * infrastructure update causes the AMI ID to be re-selected. If the
         * <code>version</code> setting in the launch template
         * (<code>launchTemplate</code>) is set to <code>$Latest</code> or
         * <code>$Default</code>, the latest or default version of the launch template is
         * evaluated up at the time of the infrastructure update, even if the
         * <code>launchTemplate</code> wasn't updated.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateComputeEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComputeEnvironmentOutcome CreateComputeEnvironment(const Model::CreateComputeEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateComputeEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateComputeEnvironmentRequestT = Model::CreateComputeEnvironmentRequest>
        Model::CreateComputeEnvironmentOutcomeCallable CreateComputeEnvironmentCallable(const CreateComputeEnvironmentRequestT& request) const
        {
            return SubmitCallable(&BatchClient::CreateComputeEnvironment, request);
        }

        /**
         * An Async wrapper for CreateComputeEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateComputeEnvironmentRequestT = Model::CreateComputeEnvironmentRequest>
        void CreateComputeEnvironmentAsync(const CreateComputeEnvironmentRequestT& request, const CreateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::CreateComputeEnvironment, request, handler, context);
        }

        /**
         * <p>Creates an Batch job queue. When you create a job queue, you associate one or
         * more compute environments to the queue and assign an order of preference for the
         * compute environments.</p> <p>You also set a priority to the job queue that
         * determines the order that the Batch scheduler places jobs onto its associated
         * compute environments. For example, if a compute environment is associated with
         * more than one job queue, the job queue with a higher priority is given
         * preference for scheduling jobs to that compute environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateJobQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobQueueOutcome CreateJobQueue(const Model::CreateJobQueueRequest& request) const;

        /**
         * A Callable wrapper for CreateJobQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobQueueRequestT = Model::CreateJobQueueRequest>
        Model::CreateJobQueueOutcomeCallable CreateJobQueueCallable(const CreateJobQueueRequestT& request) const
        {
            return SubmitCallable(&BatchClient::CreateJobQueue, request);
        }

        /**
         * An Async wrapper for CreateJobQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobQueueRequestT = Model::CreateJobQueueRequest>
        void CreateJobQueueAsync(const CreateJobQueueRequestT& request, const CreateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::CreateJobQueue, request, handler, context);
        }

        /**
         * <p>Creates an Batch scheduling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateSchedulingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchedulingPolicyOutcome CreateSchedulingPolicy(const Model::CreateSchedulingPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateSchedulingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSchedulingPolicyRequestT = Model::CreateSchedulingPolicyRequest>
        Model::CreateSchedulingPolicyOutcomeCallable CreateSchedulingPolicyCallable(const CreateSchedulingPolicyRequestT& request) const
        {
            return SubmitCallable(&BatchClient::CreateSchedulingPolicy, request);
        }

        /**
         * An Async wrapper for CreateSchedulingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSchedulingPolicyRequestT = Model::CreateSchedulingPolicyRequest>
        void CreateSchedulingPolicyAsync(const CreateSchedulingPolicyRequestT& request, const CreateSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::CreateSchedulingPolicy, request, handler, context);
        }

        /**
         * <p>Deletes an Batch compute environment.</p> <p>Before you can delete a compute
         * environment, you must set its state to <code>DISABLED</code> with the
         * <a>UpdateComputeEnvironment</a> API operation and disassociate it from any job
         * queues with the <a>UpdateJobQueue</a> API operation. Compute environments that
         * use Fargate resources must terminate all active jobs on that compute environment
         * before deleting the compute environment. If this isn't done, the compute
         * environment enters an invalid state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteComputeEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComputeEnvironmentOutcome DeleteComputeEnvironment(const Model::DeleteComputeEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComputeEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteComputeEnvironmentRequestT = Model::DeleteComputeEnvironmentRequest>
        Model::DeleteComputeEnvironmentOutcomeCallable DeleteComputeEnvironmentCallable(const DeleteComputeEnvironmentRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DeleteComputeEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteComputeEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteComputeEnvironmentRequestT = Model::DeleteComputeEnvironmentRequest>
        void DeleteComputeEnvironmentAsync(const DeleteComputeEnvironmentRequestT& request, const DeleteComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DeleteComputeEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes the specified job queue. You must first disable submissions for a
         * queue with the <a>UpdateJobQueue</a> operation. All jobs in the queue are
         * eventually terminated when you delete a job queue. The jobs are terminated at a
         * rate of about 16 jobs each second.</p> <p>It's not necessary to disassociate
         * compute environments from a queue before submitting a
         * <code>DeleteJobQueue</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteJobQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobQueueOutcome DeleteJobQueue(const Model::DeleteJobQueueRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobQueueRequestT = Model::DeleteJobQueueRequest>
        Model::DeleteJobQueueOutcomeCallable DeleteJobQueueCallable(const DeleteJobQueueRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DeleteJobQueue, request);
        }

        /**
         * An Async wrapper for DeleteJobQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobQueueRequestT = Model::DeleteJobQueueRequest>
        void DeleteJobQueueAsync(const DeleteJobQueueRequestT& request, const DeleteJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DeleteJobQueue, request, handler, context);
        }

        /**
         * <p>Deletes the specified scheduling policy.</p> <p>You can't delete a scheduling
         * policy that's used in any job queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteSchedulingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchedulingPolicyOutcome DeleteSchedulingPolicy(const Model::DeleteSchedulingPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchedulingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSchedulingPolicyRequestT = Model::DeleteSchedulingPolicyRequest>
        Model::DeleteSchedulingPolicyOutcomeCallable DeleteSchedulingPolicyCallable(const DeleteSchedulingPolicyRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DeleteSchedulingPolicy, request);
        }

        /**
         * An Async wrapper for DeleteSchedulingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSchedulingPolicyRequestT = Model::DeleteSchedulingPolicyRequest>
        void DeleteSchedulingPolicyAsync(const DeleteSchedulingPolicyRequestT& request, const DeleteSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DeleteSchedulingPolicy, request, handler, context);
        }

        /**
         * <p>Deregisters an Batch job definition. Job definitions are permanently deleted
         * after 180 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeregisterJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterJobDefinitionOutcome DeregisterJobDefinition(const Model::DeregisterJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeregisterJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterJobDefinitionRequestT = Model::DeregisterJobDefinitionRequest>
        Model::DeregisterJobDefinitionOutcomeCallable DeregisterJobDefinitionCallable(const DeregisterJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DeregisterJobDefinition, request);
        }

        /**
         * An Async wrapper for DeregisterJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterJobDefinitionRequestT = Model::DeregisterJobDefinitionRequest>
        void DeregisterJobDefinitionAsync(const DeregisterJobDefinitionRequestT& request, const DeregisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DeregisterJobDefinition, request, handler, context);
        }

        /**
         * <p>Describes one or more of your compute environments.</p> <p>If you're using an
         * unmanaged compute environment, you can use the
         * <code>DescribeComputeEnvironment</code> operation to determine the
         * <code>ecsClusterArn</code> that you launch your Amazon ECS container instances
         * into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeComputeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComputeEnvironmentsOutcome DescribeComputeEnvironments(const Model::DescribeComputeEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeComputeEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeComputeEnvironmentsRequestT = Model::DescribeComputeEnvironmentsRequest>
        Model::DescribeComputeEnvironmentsOutcomeCallable DescribeComputeEnvironmentsCallable(const DescribeComputeEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DescribeComputeEnvironments, request);
        }

        /**
         * An Async wrapper for DescribeComputeEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeComputeEnvironmentsRequestT = Model::DescribeComputeEnvironmentsRequest>
        void DescribeComputeEnvironmentsAsync(const DescribeComputeEnvironmentsRequestT& request, const DescribeComputeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DescribeComputeEnvironments, request, handler, context);
        }

        /**
         * <p>Describes a list of job definitions. You can specify a <code>status</code>
         * (such as <code>ACTIVE</code>) to only return job definitions that match that
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobDefinitionsOutcome DescribeJobDefinitions(const Model::DescribeJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobDefinitionsRequestT = Model::DescribeJobDefinitionsRequest>
        Model::DescribeJobDefinitionsOutcomeCallable DescribeJobDefinitionsCallable(const DescribeJobDefinitionsRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DescribeJobDefinitions, request);
        }

        /**
         * An Async wrapper for DescribeJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobDefinitionsRequestT = Model::DescribeJobDefinitionsRequest>
        void DescribeJobDefinitionsAsync(const DescribeJobDefinitionsRequestT& request, const DescribeJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DescribeJobDefinitions, request, handler, context);
        }

        /**
         * <p>Describes one or more of your job queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobQueuesOutcome DescribeJobQueues(const Model::DescribeJobQueuesRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobQueuesRequestT = Model::DescribeJobQueuesRequest>
        Model::DescribeJobQueuesOutcomeCallable DescribeJobQueuesCallable(const DescribeJobQueuesRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DescribeJobQueues, request);
        }

        /**
         * An Async wrapper for DescribeJobQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobQueuesRequestT = Model::DescribeJobQueuesRequest>
        void DescribeJobQueuesAsync(const DescribeJobQueuesRequestT& request, const DescribeJobQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DescribeJobQueues, request, handler, context);
        }

        /**
         * <p>Describes a list of Batch jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobsRequestT = Model::DescribeJobsRequest>
        Model::DescribeJobsOutcomeCallable DescribeJobsCallable(const DescribeJobsRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DescribeJobs, request);
        }

        /**
         * An Async wrapper for DescribeJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobsRequestT = Model::DescribeJobsRequest>
        void DescribeJobsAsync(const DescribeJobsRequestT& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DescribeJobs, request, handler, context);
        }

        /**
         * <p>Describes one or more of your scheduling policies.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeSchedulingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchedulingPoliciesOutcome DescribeSchedulingPolicies(const Model::DescribeSchedulingPoliciesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSchedulingPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSchedulingPoliciesRequestT = Model::DescribeSchedulingPoliciesRequest>
        Model::DescribeSchedulingPoliciesOutcomeCallable DescribeSchedulingPoliciesCallable(const DescribeSchedulingPoliciesRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DescribeSchedulingPolicies, request);
        }

        /**
         * An Async wrapper for DescribeSchedulingPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSchedulingPoliciesRequestT = Model::DescribeSchedulingPoliciesRequest>
        void DescribeSchedulingPoliciesAsync(const DescribeSchedulingPoliciesRequestT& request, const DescribeSchedulingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DescribeSchedulingPolicies, request, handler, context);
        }

        /**
         * <p>Returns a list of Batch jobs.</p> <p>You must specify only one of the
         * following items:</p> <ul> <li> <p>A job queue ID to return a list of jobs in
         * that job queue</p> </li> <li> <p>A multi-node parallel job ID to return a list
         * of nodes for that job</p> </li> <li> <p>An array job ID to return a list of the
         * children for that job</p> </li> </ul> <p>You can filter the results by job
         * status with the <code>jobStatus</code> parameter. If you don't specify a status,
         * only <code>RUNNING</code> jobs are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&BatchClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::ListJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of Batch scheduling policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListSchedulingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchedulingPoliciesOutcome ListSchedulingPolicies(const Model::ListSchedulingPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListSchedulingPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchedulingPoliciesRequestT = Model::ListSchedulingPoliciesRequest>
        Model::ListSchedulingPoliciesOutcomeCallable ListSchedulingPoliciesCallable(const ListSchedulingPoliciesRequestT& request) const
        {
            return SubmitCallable(&BatchClient::ListSchedulingPolicies, request);
        }

        /**
         * An Async wrapper for ListSchedulingPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchedulingPoliciesRequestT = Model::ListSchedulingPoliciesRequest>
        void ListSchedulingPoliciesAsync(const ListSchedulingPoliciesRequestT& request, const ListSchedulingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::ListSchedulingPolicies, request, handler, context);
        }

        /**
         * <p>Lists the tags for an Batch resource. Batch resources that support tags are
         * compute environments, jobs, job definitions, job queues, and scheduling
         * policies. ARNs for child jobs of array and multi-node parallel (MNP) jobs aren't
         * supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BatchClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Registers an Batch job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RegisterJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterJobDefinitionOutcome RegisterJobDefinition(const Model::RegisterJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for RegisterJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterJobDefinitionRequestT = Model::RegisterJobDefinitionRequest>
        Model::RegisterJobDefinitionOutcomeCallable RegisterJobDefinitionCallable(const RegisterJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&BatchClient::RegisterJobDefinition, request);
        }

        /**
         * An Async wrapper for RegisterJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterJobDefinitionRequestT = Model::RegisterJobDefinitionRequest>
        void RegisterJobDefinitionAsync(const RegisterJobDefinitionRequestT& request, const RegisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::RegisterJobDefinition, request, handler, context);
        }

        /**
         * <p>Submits an Batch job from a job definition. Parameters that are specified
         * during <a>SubmitJob</a> override parameters defined in the job definition. vCPU
         * and memory requirements that are specified in the
         * <code>resourceRequirements</code> objects in the job definition are the
         * exception. They can't be overridden this way using the <code>memory</code> and
         * <code>vcpus</code> parameters. Rather, you must specify updates to job
         * definition parameters in a <code>resourceRequirements</code> object that's
         * included in the <code>containerOverrides</code> parameter.</p>  <p>Job
         * queues with a scheduling policy are limited to 500 active fair share identifiers
         * at a time. </p>   <p>Jobs that run on Fargate resources can't
         * be guaranteed to run for more than 14 days. This is because, after 14 days,
         * Fargate resources might become unavailable and job might be terminated.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/SubmitJob">AWS API
         * Reference</a></p>
         */
        virtual Model::SubmitJobOutcome SubmitJob(const Model::SubmitJobRequest& request) const;

        /**
         * A Callable wrapper for SubmitJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitJobRequestT = Model::SubmitJobRequest>
        Model::SubmitJobOutcomeCallable SubmitJobCallable(const SubmitJobRequestT& request) const
        {
            return SubmitCallable(&BatchClient::SubmitJob, request);
        }

        /**
         * An Async wrapper for SubmitJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitJobRequestT = Model::SubmitJobRequest>
        void SubmitJobAsync(const SubmitJobRequestT& request, const SubmitJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::SubmitJob, request, handler, context);
        }

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource aren't specified in the
         * request parameters, they aren't changed. When a resource is deleted, the tags
         * that are associated with that resource are deleted as well. Batch resources that
         * support tags are compute environments, jobs, job definitions, job queues, and
         * scheduling policies. ARNs for child jobs of array and multi-node parallel (MNP)
         * jobs aren't supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BatchClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::TagResource, request, handler, context);
        }

        /**
         * <p>Terminates a job in a job queue. Jobs that are in the <code>STARTING</code>
         * or <code>RUNNING</code> state are terminated, which causes them to transition to
         * <code>FAILED</code>. Jobs that have not progressed to the <code>STARTING</code>
         * state are cancelled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TerminateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateJobOutcome TerminateJob(const Model::TerminateJobRequest& request) const;

        /**
         * A Callable wrapper for TerminateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateJobRequestT = Model::TerminateJobRequest>
        Model::TerminateJobOutcomeCallable TerminateJobCallable(const TerminateJobRequestT& request) const
        {
            return SubmitCallable(&BatchClient::TerminateJob, request);
        }

        /**
         * An Async wrapper for TerminateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateJobRequestT = Model::TerminateJobRequest>
        void TerminateJobAsync(const TerminateJobRequestT& request, const TerminateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::TerminateJob, request, handler, context);
        }

        /**
         * <p>Deletes specified tags from an Batch resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BatchClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an Batch compute environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateComputeEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComputeEnvironmentOutcome UpdateComputeEnvironment(const Model::UpdateComputeEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateComputeEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateComputeEnvironmentRequestT = Model::UpdateComputeEnvironmentRequest>
        Model::UpdateComputeEnvironmentOutcomeCallable UpdateComputeEnvironmentCallable(const UpdateComputeEnvironmentRequestT& request) const
        {
            return SubmitCallable(&BatchClient::UpdateComputeEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateComputeEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateComputeEnvironmentRequestT = Model::UpdateComputeEnvironmentRequest>
        void UpdateComputeEnvironmentAsync(const UpdateComputeEnvironmentRequestT& request, const UpdateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::UpdateComputeEnvironment, request, handler, context);
        }

        /**
         * <p>Updates a job queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateJobQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobQueueOutcome UpdateJobQueue(const Model::UpdateJobQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobQueueRequestT = Model::UpdateJobQueueRequest>
        Model::UpdateJobQueueOutcomeCallable UpdateJobQueueCallable(const UpdateJobQueueRequestT& request) const
        {
            return SubmitCallable(&BatchClient::UpdateJobQueue, request);
        }

        /**
         * An Async wrapper for UpdateJobQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobQueueRequestT = Model::UpdateJobQueueRequest>
        void UpdateJobQueueAsync(const UpdateJobQueueRequestT& request, const UpdateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::UpdateJobQueue, request, handler, context);
        }

        /**
         * <p>Updates a scheduling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateSchedulingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchedulingPolicyOutcome UpdateSchedulingPolicy(const Model::UpdateSchedulingPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateSchedulingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSchedulingPolicyRequestT = Model::UpdateSchedulingPolicyRequest>
        Model::UpdateSchedulingPolicyOutcomeCallable UpdateSchedulingPolicyCallable(const UpdateSchedulingPolicyRequestT& request) const
        {
            return SubmitCallable(&BatchClient::UpdateSchedulingPolicy, request);
        }

        /**
         * An Async wrapper for UpdateSchedulingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSchedulingPolicyRequestT = Model::UpdateSchedulingPolicyRequest>
        void UpdateSchedulingPolicyAsync(const UpdateSchedulingPolicyRequestT& request, const UpdateSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::UpdateSchedulingPolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BatchEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BatchClient>;
      void init(const BatchClientConfiguration& clientConfiguration);

      BatchClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BatchEndpointProviderBase> m_endpointProvider;
  };

} // namespace Batch
} // namespace Aws
