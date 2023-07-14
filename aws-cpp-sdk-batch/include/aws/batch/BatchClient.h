/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/batch/model/CancelJobResult.h>
#include <aws/batch/model/CreateComputeEnvironmentResult.h>
#include <aws/batch/model/CreateJobQueueResult.h>
#include <aws/batch/model/CreateSchedulingPolicyResult.h>
#include <aws/batch/model/DeleteComputeEnvironmentResult.h>
#include <aws/batch/model/DeleteJobQueueResult.h>
#include <aws/batch/model/DeleteSchedulingPolicyResult.h>
#include <aws/batch/model/DeregisterJobDefinitionResult.h>
#include <aws/batch/model/DescribeComputeEnvironmentsResult.h>
#include <aws/batch/model/DescribeJobDefinitionsResult.h>
#include <aws/batch/model/DescribeJobQueuesResult.h>
#include <aws/batch/model/DescribeJobsResult.h>
#include <aws/batch/model/DescribeSchedulingPoliciesResult.h>
#include <aws/batch/model/ListJobsResult.h>
#include <aws/batch/model/ListSchedulingPoliciesResult.h>
#include <aws/batch/model/ListTagsForResourceResult.h>
#include <aws/batch/model/RegisterJobDefinitionResult.h>
#include <aws/batch/model/SubmitJobResult.h>
#include <aws/batch/model/TagResourceResult.h>
#include <aws/batch/model/TerminateJobResult.h>
#include <aws/batch/model/UntagResourceResult.h>
#include <aws/batch/model/UpdateComputeEnvironmentResult.h>
#include <aws/batch/model/UpdateJobQueueResult.h>
#include <aws/batch/model/UpdateSchedulingPolicyResult.h>
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

namespace Batch
{

namespace Model
{
        class CancelJobRequest;
        class CreateComputeEnvironmentRequest;
        class CreateJobQueueRequest;
        class CreateSchedulingPolicyRequest;
        class DeleteComputeEnvironmentRequest;
        class DeleteJobQueueRequest;
        class DeleteSchedulingPolicyRequest;
        class DeregisterJobDefinitionRequest;
        class DescribeComputeEnvironmentsRequest;
        class DescribeJobDefinitionsRequest;
        class DescribeJobQueuesRequest;
        class DescribeJobsRequest;
        class DescribeSchedulingPoliciesRequest;
        class ListJobsRequest;
        class ListSchedulingPoliciesRequest;
        class ListTagsForResourceRequest;
        class RegisterJobDefinitionRequest;
        class SubmitJobRequest;
        class TagResourceRequest;
        class TerminateJobRequest;
        class UntagResourceRequest;
        class UpdateComputeEnvironmentRequest;
        class UpdateJobQueueRequest;
        class UpdateSchedulingPolicyRequest;

        typedef Aws::Utils::Outcome<CancelJobResult, BatchError> CancelJobOutcome;
        typedef Aws::Utils::Outcome<CreateComputeEnvironmentResult, BatchError> CreateComputeEnvironmentOutcome;
        typedef Aws::Utils::Outcome<CreateJobQueueResult, BatchError> CreateJobQueueOutcome;
        typedef Aws::Utils::Outcome<CreateSchedulingPolicyResult, BatchError> CreateSchedulingPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteComputeEnvironmentResult, BatchError> DeleteComputeEnvironmentOutcome;
        typedef Aws::Utils::Outcome<DeleteJobQueueResult, BatchError> DeleteJobQueueOutcome;
        typedef Aws::Utils::Outcome<DeleteSchedulingPolicyResult, BatchError> DeleteSchedulingPolicyOutcome;
        typedef Aws::Utils::Outcome<DeregisterJobDefinitionResult, BatchError> DeregisterJobDefinitionOutcome;
        typedef Aws::Utils::Outcome<DescribeComputeEnvironmentsResult, BatchError> DescribeComputeEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<DescribeJobDefinitionsResult, BatchError> DescribeJobDefinitionsOutcome;
        typedef Aws::Utils::Outcome<DescribeJobQueuesResult, BatchError> DescribeJobQueuesOutcome;
        typedef Aws::Utils::Outcome<DescribeJobsResult, BatchError> DescribeJobsOutcome;
        typedef Aws::Utils::Outcome<DescribeSchedulingPoliciesResult, BatchError> DescribeSchedulingPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, BatchError> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListSchedulingPoliciesResult, BatchError> ListSchedulingPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, BatchError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RegisterJobDefinitionResult, BatchError> RegisterJobDefinitionOutcome;
        typedef Aws::Utils::Outcome<SubmitJobResult, BatchError> SubmitJobOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, BatchError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TerminateJobResult, BatchError> TerminateJobOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, BatchError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateComputeEnvironmentResult, BatchError> UpdateComputeEnvironmentOutcome;
        typedef Aws::Utils::Outcome<UpdateJobQueueResult, BatchError> UpdateJobQueueOutcome;
        typedef Aws::Utils::Outcome<UpdateSchedulingPolicyResult, BatchError> UpdateSchedulingPolicyOutcome;

        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateComputeEnvironmentOutcome> CreateComputeEnvironmentOutcomeCallable;
        typedef std::future<CreateJobQueueOutcome> CreateJobQueueOutcomeCallable;
        typedef std::future<CreateSchedulingPolicyOutcome> CreateSchedulingPolicyOutcomeCallable;
        typedef std::future<DeleteComputeEnvironmentOutcome> DeleteComputeEnvironmentOutcomeCallable;
        typedef std::future<DeleteJobQueueOutcome> DeleteJobQueueOutcomeCallable;
        typedef std::future<DeleteSchedulingPolicyOutcome> DeleteSchedulingPolicyOutcomeCallable;
        typedef std::future<DeregisterJobDefinitionOutcome> DeregisterJobDefinitionOutcomeCallable;
        typedef std::future<DescribeComputeEnvironmentsOutcome> DescribeComputeEnvironmentsOutcomeCallable;
        typedef std::future<DescribeJobDefinitionsOutcome> DescribeJobDefinitionsOutcomeCallable;
        typedef std::future<DescribeJobQueuesOutcome> DescribeJobQueuesOutcomeCallable;
        typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
        typedef std::future<DescribeSchedulingPoliciesOutcome> DescribeSchedulingPoliciesOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListSchedulingPoliciesOutcome> ListSchedulingPoliciesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RegisterJobDefinitionOutcome> RegisterJobDefinitionOutcomeCallable;
        typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TerminateJobOutcome> TerminateJobOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateComputeEnvironmentOutcome> UpdateComputeEnvironmentOutcomeCallable;
        typedef std::future<UpdateJobQueueOutcome> UpdateJobQueueOutcomeCallable;
        typedef std::future<UpdateSchedulingPolicyOutcome> UpdateSchedulingPolicyOutcomeCallable;
} // namespace Model

  class BatchClient;

    typedef std::function<void(const BatchClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateComputeEnvironmentRequest&, const Model::CreateComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateJobQueueRequest&, const Model::CreateJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateSchedulingPolicyRequest&, const Model::CreateSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchedulingPolicyResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteComputeEnvironmentRequest&, const Model::DeleteComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteJobQueueRequest&, const Model::DeleteJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteSchedulingPolicyRequest&, const Model::DeleteSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchedulingPolicyResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeregisterJobDefinitionRequest&, const Model::DeregisterJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvironmentsRequest&, const Model::DescribeComputeEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComputeEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobDefinitionsRequest&, const Model::DescribeJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobQueuesRequest&, const Model::DescribeJobQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobQueuesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobsRequest&, const Model::DescribeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeSchedulingPoliciesRequest&, const Model::DescribeSchedulingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchedulingPoliciesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListSchedulingPoliciesRequest&, const Model::ListSchedulingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchedulingPoliciesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::RegisterJobDefinitionRequest&, const Model::RegisterJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::SubmitJobRequest&, const Model::SubmitJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::TerminateJobRequest&, const Model::TerminateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateComputeEnvironmentRequest&, const Model::UpdateComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateJobQueueRequest&, const Model::UpdateJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateSchedulingPolicyRequest&, const Model::UpdateSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchedulingPolicyResponseReceivedHandler;

  /**
   * <fullname>Batch</fullname> <p>Using Batch, you can run batch computing workloads
   * on the Amazon Web Services Cloud. Batch computing is a common means for
   * developers, scientists, and engineers to access large amounts of compute
   * resources. Batch uses the advantages of this computing workload to remove the
   * undifferentiated heavy lifting of configuring and managing required
   * infrastructure. At the same time, it also adopts a familiar batch computing
   * software approach. Given these advantages, Batch can help you to efficiently
   * provision resources in response to jobs submitted, thus effectively helping you
   * to eliminate capacity constraints, reduce compute costs, and deliver your
   * results more quickly.</p> <p>As a fully managed service, Batch can run batch
   * computing workloads of any scale. Batch automatically provisions compute
   * resources and optimizes workload distribution based on the quantity and scale of
   * your specific workloads. With Batch, there's no need to install or manage batch
   * computing software. This means that you can focus your time and energy on
   * analyzing results and solving your specific problems.</p>
   */
  class AWS_BATCH_API BatchClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BatchClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BatchClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BatchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~BatchClient();


        /**
         * <p>Cancels a job in an Batch job queue. Jobs that are in the
         * <code>SUBMITTED</code>, <code>PENDING</code>, or <code>RUNNABLE</code> state are
         * canceled. Jobs that have progressed to <code>STARTING</code> or
         * <code>RUNNING</code> aren't canceled, but the API operation still succeeds, even
         * if no job is canceled. These jobs must be terminated with the
         * <a>TerminateJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CancelJob">AWS API
         * Reference</a></p>
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
         * your own EC2 compute resources and have a lot of flexibility with how you
         * configure your compute resources. For example, you can use custom AMIs. However,
         * you must verify that each of your AMIs meet the Amazon ECS container instance
         * AMI specification. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container_instance_AMIs.html">container
         * instance AMIs</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>. After you created your unmanaged compute environment, you can use the
         * <a>DescribeComputeEnvironments</a> operation to find the Amazon ECS cluster
         * that's associated with it. Then, launch your container instances into that
         * Amazon ECS cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_container_instance.html">Launching
         * an Amazon ECS container instance</a> in the <i>Amazon Elastic Container Service
         * Developer Guide</i>.</p>  <p>Batch doesn't automatically upgrade the AMIs
         * in a compute environment after it's created. For example, it also doesn't update
         * the AMIs in your compute environment when a newer version of the Amazon ECS
         * optimized AMI is available. You're responsible for the management of the guest
         * operating system. This includes any updates and security patches. You're also
         * responsible for any additional application software or utilities that you
         * install on the compute resources. There are two ways to use a new AMI for your
         * Batch jobs. The original method is to complete these steps:</p> <ol> <li>
         * <p>Create a new compute environment with the new AMI.</p> </li> <li> <p>Add the
         * compute environment to an existing job queue.</p> </li> <li> <p>Remove the
         * earlier compute environment from your job queue.</p> </li> <li> <p>Delete the
         * earlier compute environment.</p> </li> </ol> <p>In April 2022, Batch added
         * enhanced support for updating compute environments. For more information, see <a
         * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
         * compute environments</a>. To use the enhanced updating of compute environments
         * to update AMIs, follow these rules:</p> <ul> <li> <p>Either do not set the
         * service role (<code>serviceRole</code>) parameter or set it to the
         * <b>AWSBatchServiceRole</b> service-linked role.</p> </li> <li> <p>Set the
         * allocation strategy (<code>allocationStrategy</code>) parameter to
         * <code>BEST_FIT_PROGRESSIVE</code> or <code>SPOT_CAPACITY_OPTIMIZED</code>.</p>
         * </li> <li> <p>Set the update to latest image version
         * (<code>updateToLatestImageVersion</code>) parameter to <code>true</code>.</p>
         * </li> <li> <p>Do not specify an AMI ID in <code>imageId</code>,
         * <code>imageIdOverride</code> (in <a
         * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_Ec2Configuration.html">
         * <code>ec2Configuration</code> </a>), or in the launch template
         * (<code>launchTemplate</code>). In that case Batch will select the latest Amazon
         * ECS optimized AMI supported by Batch at the time the infrastructure update is
         * initiated. Alternatively you can specify the AMI ID in the <code>imageId</code>
         * or <code>imageIdOverride</code> parameters, or the launch template identified by
         * the <code>LaunchTemplate</code> properties. Changing any of these properties
         * will trigger an infrastructure update. If the AMI ID is specified in the launch
         * template, it can not be replaced by specifying an AMI ID in either the
         * <code>imageId</code> or <code>imageIdOverride</code> parameters. It can only be
         * replaced by specifying a different launch template, or if the launch template
         * version is set to <code>$Default</code> or <code>$Latest</code>, by setting
         * either a new default version for the launch template (if
         * <code>$Default</code>)or by adding a new version to the launch template (if
         * <code>$Latest</code>).</p> </li> </ul> <p>If these rules are followed, any
         * update that triggers an infrastructure update will cause the AMI ID to be
         * re-selected. If the <code>version</code> setting in the launch template
         * (<code>launchTemplate</code>) is set to <code>$Latest</code> or
         * <code>$Default</code>, the latest or default version of the launch template will
         * be evaluated up at the time of the infrastructure update, even if the
         * <code>launchTemplate</code> was not updated.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateComputeEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComputeEnvironmentOutcome CreateComputeEnvironment(const Model::CreateComputeEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateComputeEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComputeEnvironmentOutcomeCallable CreateComputeEnvironmentCallable(const Model::CreateComputeEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateComputeEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComputeEnvironmentAsync(const Model::CreateComputeEnvironmentRequest& request, const CreateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateJobQueueOutcomeCallable CreateJobQueueCallable(const Model::CreateJobQueueRequest& request) const;

        /**
         * An Async wrapper for CreateJobQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobQueueAsync(const Model::CreateJobQueueRequest& request, const CreateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Batch scheduling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateSchedulingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchedulingPolicyOutcome CreateSchedulingPolicy(const Model::CreateSchedulingPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateSchedulingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSchedulingPolicyOutcomeCallable CreateSchedulingPolicyCallable(const Model::CreateSchedulingPolicyRequest& request) const;

        /**
         * An Async wrapper for CreateSchedulingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSchedulingPolicyAsync(const Model::CreateSchedulingPolicyRequest& request, const CreateSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteComputeEnvironmentOutcomeCallable DeleteComputeEnvironmentCallable(const Model::DeleteComputeEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteComputeEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComputeEnvironmentAsync(const Model::DeleteComputeEnvironmentRequest& request, const DeleteComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteJobQueueOutcomeCallable DeleteJobQueueCallable(const Model::DeleteJobQueueRequest& request) const;

        /**
         * An Async wrapper for DeleteJobQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobQueueAsync(const Model::DeleteJobQueueRequest& request, const DeleteJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSchedulingPolicyOutcomeCallable DeleteSchedulingPolicyCallable(const Model::DeleteSchedulingPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteSchedulingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchedulingPolicyAsync(const Model::DeleteSchedulingPolicyRequest& request, const DeleteSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeregisterJobDefinitionOutcomeCallable DeregisterJobDefinitionCallable(const Model::DeregisterJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeregisterJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterJobDefinitionAsync(const Model::DeregisterJobDefinitionRequest& request, const DeregisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeComputeEnvironmentsOutcomeCallable DescribeComputeEnvironmentsCallable(const Model::DescribeComputeEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for DescribeComputeEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComputeEnvironmentsAsync(const Model::DescribeComputeEnvironmentsRequest& request, const DescribeComputeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeJobDefinitionsOutcomeCallable DescribeJobDefinitionsCallable(const Model::DescribeJobDefinitionsRequest& request) const;

        /**
         * An Async wrapper for DescribeJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobDefinitionsAsync(const Model::DescribeJobDefinitionsRequest& request, const DescribeJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your job queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobQueuesOutcome DescribeJobQueues(const Model::DescribeJobQueuesRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobQueuesOutcomeCallable DescribeJobQueuesCallable(const Model::DescribeJobQueuesRequest& request) const;

        /**
         * An Async wrapper for DescribeJobQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobQueuesAsync(const Model::DescribeJobQueuesRequest& request, const DescribeJobQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a list of Batch jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request) const;

        /**
         * An Async wrapper for DescribeJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSchedulingPoliciesOutcomeCallable DescribeSchedulingPoliciesCallable(const Model::DescribeSchedulingPoliciesRequest& request) const;

        /**
         * An Async wrapper for DescribeSchedulingPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSchedulingPoliciesAsync(const Model::DescribeSchedulingPoliciesRequest& request, const DescribeSchedulingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Batch scheduling policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListSchedulingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchedulingPoliciesOutcome ListSchedulingPolicies(const Model::ListSchedulingPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListSchedulingPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchedulingPoliciesOutcomeCallable ListSchedulingPoliciesCallable(const Model::ListSchedulingPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListSchedulingPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchedulingPoliciesAsync(const Model::ListSchedulingPoliciesRequest& request, const ListSchedulingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for an Batch resource. Batch resources that support tags are
         * compute environments, jobs, job definitions, job queues, and scheduling
         * policies. ARNs for child jobs of array and multi-node parallel (MNP) jobs are
         * not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListTagsForResource">AWS
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
         * <p>Registers an Batch job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RegisterJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterJobDefinitionOutcome RegisterJobDefinition(const Model::RegisterJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for RegisterJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterJobDefinitionOutcomeCallable RegisterJobDefinitionCallable(const Model::RegisterJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for RegisterJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterJobDefinitionAsync(const Model::RegisterJobDefinitionRequest& request, const RegisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::SubmitJobOutcomeCallable SubmitJobCallable(const Model::SubmitJobRequest& request) const;

        /**
         * An Async wrapper for SubmitJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubmitJobAsync(const Model::SubmitJobRequest& request, const SubmitJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource aren't specified in the
         * request parameters, they aren't changed. When a resource is deleted, the tags
         * that are associated with that resource are deleted as well. Batch resources that
         * support tags are compute environments, jobs, job definitions, job queues, and
         * scheduling policies. ARNs for child jobs of array and multi-node parallel (MNP)
         * jobs are not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TagResource">AWS
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
        virtual Model::TerminateJobOutcomeCallable TerminateJobCallable(const Model::TerminateJobRequest& request) const;

        /**
         * An Async wrapper for TerminateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateJobAsync(const Model::TerminateJobRequest& request, const TerminateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from an Batch resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UntagResource">AWS
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
         * <p>Updates an Batch compute environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateComputeEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComputeEnvironmentOutcome UpdateComputeEnvironment(const Model::UpdateComputeEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateComputeEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateComputeEnvironmentOutcomeCallable UpdateComputeEnvironmentCallable(const Model::UpdateComputeEnvironmentRequest& request) const;

        /**
         * An Async wrapper for UpdateComputeEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComputeEnvironmentAsync(const Model::UpdateComputeEnvironmentRequest& request, const UpdateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a job queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateJobQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobQueueOutcome UpdateJobQueue(const Model::UpdateJobQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobQueueOutcomeCallable UpdateJobQueueCallable(const Model::UpdateJobQueueRequest& request) const;

        /**
         * An Async wrapper for UpdateJobQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobQueueAsync(const Model::UpdateJobQueueRequest& request, const UpdateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a scheduling policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateSchedulingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchedulingPolicyOutcome UpdateSchedulingPolicy(const Model::UpdateSchedulingPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateSchedulingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSchedulingPolicyOutcomeCallable UpdateSchedulingPolicyCallable(const Model::UpdateSchedulingPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateSchedulingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSchedulingPolicyAsync(const Model::UpdateSchedulingPolicyRequest& request, const UpdateSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComputeEnvironmentAsyncHelper(const Model::CreateComputeEnvironmentRequest& request, const CreateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobQueueAsyncHelper(const Model::CreateJobQueueRequest& request, const CreateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSchedulingPolicyAsyncHelper(const Model::CreateSchedulingPolicyRequest& request, const CreateSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteComputeEnvironmentAsyncHelper(const Model::DeleteComputeEnvironmentRequest& request, const DeleteComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobQueueAsyncHelper(const Model::DeleteJobQueueRequest& request, const DeleteJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSchedulingPolicyAsyncHelper(const Model::DeleteSchedulingPolicyRequest& request, const DeleteSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterJobDefinitionAsyncHelper(const Model::DeregisterJobDefinitionRequest& request, const DeregisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComputeEnvironmentsAsyncHelper(const Model::DescribeComputeEnvironmentsRequest& request, const DescribeComputeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobDefinitionsAsyncHelper(const Model::DescribeJobDefinitionsRequest& request, const DescribeJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobQueuesAsyncHelper(const Model::DescribeJobQueuesRequest& request, const DescribeJobQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobsAsyncHelper(const Model::DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSchedulingPoliciesAsyncHelper(const Model::DescribeSchedulingPoliciesRequest& request, const DescribeSchedulingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchedulingPoliciesAsyncHelper(const Model::ListSchedulingPoliciesRequest& request, const ListSchedulingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterJobDefinitionAsyncHelper(const Model::RegisterJobDefinitionRequest& request, const RegisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitJobAsyncHelper(const Model::SubmitJobRequest& request, const SubmitJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateJobAsyncHelper(const Model::TerminateJobRequest& request, const TerminateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateComputeEnvironmentAsyncHelper(const Model::UpdateComputeEnvironmentRequest& request, const UpdateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobQueueAsyncHelper(const Model::UpdateJobQueueRequest& request, const UpdateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSchedulingPolicyAsyncHelper(const Model::UpdateSchedulingPolicyRequest& request, const UpdateSchedulingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Batch
} // namespace Aws
