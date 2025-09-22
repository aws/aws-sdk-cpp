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
   * software approach. You can use Batch to efficiently provision resources, and
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
         * <p>Cancels a job in an Batch job queue. Jobs that are in a
         * <code>SUBMITTED</code>, <code>PENDING</code>, or <code>RUNNABLE</code> state are
         * cancelled and the job status is updated to <code>FAILED</code>.</p>  <p>A
         * <code>PENDING</code> job is canceled after all dependency jobs are completed.
         * Therefore, it may take longer than expected to cancel a job in
         * <code>PENDING</code> status.</p> <p>When you try to cancel an array parent job
         * in <code>PENDING</code>, Batch attempts to cancel all child jobs. The array
         * parent job is canceled when all child jobs are completed.</p>  <p>Jobs
         * that progressed to the <code>STARTING</code> or <code>RUNNING</code> state
         * aren't canceled. However, the API operation still succeeds, even if no job is
         * canceled. These jobs must be terminated with the <a>TerminateJob</a>
         * operation.</p><p><h3>See Also:</h3>   <a
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
         * price.</p> <p>In an unmanaged compute environment, you can manage your own EC2
         * compute resources and have flexibility with how you configure your compute
         * resources. For example, you can use custom AMIs. However, you must verify that
         * each of your AMIs meet the Amazon ECS container instance AMI specification. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container_instance_AMIs.html">container
         * instance AMIs</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>. After you created your unmanaged compute environment, you can use the
         * <a>DescribeComputeEnvironments</a> operation to find the Amazon ECS cluster
         * that's associated with it. Then, launch your container instances into that
         * Amazon ECS cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_container_instance.html">Launching
         * an Amazon ECS container instance</a> in the <i>Amazon Elastic Container Service
         * Developer Guide</i>.</p>  <p>Batch doesn't automatically upgrade the AMIs
         * in a compute environment after it's created. For more information on how to
         * update a compute environment's AMI, see <a
         * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
         * compute environments</a> in the <i>Batch User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
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
         * <p>Creates an Batch consumable resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateConsumableResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConsumableResourceOutcome CreateConsumableResource(const Model::CreateConsumableResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateConsumableResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConsumableResourceRequestT = Model::CreateConsumableResourceRequest>
        Model::CreateConsumableResourceOutcomeCallable CreateConsumableResourceCallable(const CreateConsumableResourceRequestT& request) const
        {
            return SubmitCallable(&BatchClient::CreateConsumableResource, request);
        }

        /**
         * An Async wrapper for CreateConsumableResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConsumableResourceRequestT = Model::CreateConsumableResourceRequest>
        void CreateConsumableResourceAsync(const CreateConsumableResourceRequestT& request, const CreateConsumableResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::CreateConsumableResource, request, handler, context);
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
         * <p>Creates a service environment for running service jobs. Service environments
         * define capacity limits for specific service types such as SageMaker Training
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateServiceEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceEnvironmentOutcome CreateServiceEnvironment(const Model::CreateServiceEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceEnvironmentRequestT = Model::CreateServiceEnvironmentRequest>
        Model::CreateServiceEnvironmentOutcomeCallable CreateServiceEnvironmentCallable(const CreateServiceEnvironmentRequestT& request) const
        {
            return SubmitCallable(&BatchClient::CreateServiceEnvironment, request);
        }

        /**
         * An Async wrapper for CreateServiceEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceEnvironmentRequestT = Model::CreateServiceEnvironmentRequest>
        void CreateServiceEnvironmentAsync(const CreateServiceEnvironmentRequestT& request, const CreateServiceEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::CreateServiceEnvironment, request, handler, context);
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
         * <p>Deletes the specified consumable resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteConsumableResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConsumableResourceOutcome DeleteConsumableResource(const Model::DeleteConsumableResourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteConsumableResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConsumableResourceRequestT = Model::DeleteConsumableResourceRequest>
        Model::DeleteConsumableResourceOutcomeCallable DeleteConsumableResourceCallable(const DeleteConsumableResourceRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DeleteConsumableResource, request);
        }

        /**
         * An Async wrapper for DeleteConsumableResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConsumableResourceRequestT = Model::DeleteConsumableResourceRequest>
        void DeleteConsumableResourceAsync(const DeleteConsumableResourceRequestT& request, const DeleteConsumableResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DeleteConsumableResource, request, handler, context);
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
         * <p>Deletes a Service environment. Before you can delete a service environment,
         * you must first set its state to <code>DISABLED</code> with the
         * <code>UpdateServiceEnvironment</code> API operation and disassociate it from any
         * job queues with the <code>UpdateJobQueue</code> API operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteServiceEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceEnvironmentOutcome DeleteServiceEnvironment(const Model::DeleteServiceEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceEnvironmentRequestT = Model::DeleteServiceEnvironmentRequest>
        Model::DeleteServiceEnvironmentOutcomeCallable DeleteServiceEnvironmentCallable(const DeleteServiceEnvironmentRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DeleteServiceEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteServiceEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceEnvironmentRequestT = Model::DeleteServiceEnvironmentRequest>
        void DeleteServiceEnvironmentAsync(const DeleteServiceEnvironmentRequestT& request, const DeleteServiceEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DeleteServiceEnvironment, request, handler, context);
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
        virtual Model::DescribeComputeEnvironmentsOutcome DescribeComputeEnvironments(const Model::DescribeComputeEnvironmentsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeComputeEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeComputeEnvironmentsRequestT = Model::DescribeComputeEnvironmentsRequest>
        Model::DescribeComputeEnvironmentsOutcomeCallable DescribeComputeEnvironmentsCallable(const DescribeComputeEnvironmentsRequestT& request = {}) const
        {
            return SubmitCallable(&BatchClient::DescribeComputeEnvironments, request);
        }

        /**
         * An Async wrapper for DescribeComputeEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeComputeEnvironmentsRequestT = Model::DescribeComputeEnvironmentsRequest>
        void DescribeComputeEnvironmentsAsync(const DescribeComputeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeComputeEnvironmentsRequestT& request = {}) const
        {
            return SubmitAsync(&BatchClient::DescribeComputeEnvironments, request, handler, context);
        }

        /**
         * <p>Returns a description of the specified consumable resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeConsumableResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConsumableResourceOutcome DescribeConsumableResource(const Model::DescribeConsumableResourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeConsumableResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConsumableResourceRequestT = Model::DescribeConsumableResourceRequest>
        Model::DescribeConsumableResourceOutcomeCallable DescribeConsumableResourceCallable(const DescribeConsumableResourceRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DescribeConsumableResource, request);
        }

        /**
         * An Async wrapper for DescribeConsumableResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConsumableResourceRequestT = Model::DescribeConsumableResourceRequest>
        void DescribeConsumableResourceAsync(const DescribeConsumableResourceRequestT& request, const DescribeConsumableResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DescribeConsumableResource, request, handler, context);
        }

        /**
         * <p>Describes a list of job definitions. You can specify a <code>status</code>
         * (such as <code>ACTIVE</code>) to only return job definitions that match that
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobDefinitionsOutcome DescribeJobDefinitions(const Model::DescribeJobDefinitionsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobDefinitionsRequestT = Model::DescribeJobDefinitionsRequest>
        Model::DescribeJobDefinitionsOutcomeCallable DescribeJobDefinitionsCallable(const DescribeJobDefinitionsRequestT& request = {}) const
        {
            return SubmitCallable(&BatchClient::DescribeJobDefinitions, request);
        }

        /**
         * An Async wrapper for DescribeJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobDefinitionsRequestT = Model::DescribeJobDefinitionsRequest>
        void DescribeJobDefinitionsAsync(const DescribeJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeJobDefinitionsRequestT& request = {}) const
        {
            return SubmitAsync(&BatchClient::DescribeJobDefinitions, request, handler, context);
        }

        /**
         * <p>Describes one or more of your job queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobQueuesOutcome DescribeJobQueues(const Model::DescribeJobQueuesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeJobQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobQueuesRequestT = Model::DescribeJobQueuesRequest>
        Model::DescribeJobQueuesOutcomeCallable DescribeJobQueuesCallable(const DescribeJobQueuesRequestT& request = {}) const
        {
            return SubmitCallable(&BatchClient::DescribeJobQueues, request);
        }

        /**
         * An Async wrapper for DescribeJobQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobQueuesRequestT = Model::DescribeJobQueuesRequest>
        void DescribeJobQueuesAsync(const DescribeJobQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeJobQueuesRequestT& request = {}) const
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
         * <p>Describes one or more of your service environments.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeServiceEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceEnvironmentsOutcome DescribeServiceEnvironments(const Model::DescribeServiceEnvironmentsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeServiceEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServiceEnvironmentsRequestT = Model::DescribeServiceEnvironmentsRequest>
        Model::DescribeServiceEnvironmentsOutcomeCallable DescribeServiceEnvironmentsCallable(const DescribeServiceEnvironmentsRequestT& request = {}) const
        {
            return SubmitCallable(&BatchClient::DescribeServiceEnvironments, request);
        }

        /**
         * An Async wrapper for DescribeServiceEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServiceEnvironmentsRequestT = Model::DescribeServiceEnvironmentsRequest>
        void DescribeServiceEnvironmentsAsync(const DescribeServiceEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeServiceEnvironmentsRequestT& request = {}) const
        {
            return SubmitAsync(&BatchClient::DescribeServiceEnvironments, request, handler, context);
        }

        /**
         * <p>The details of a service job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeServiceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceJobOutcome DescribeServiceJob(const Model::DescribeServiceJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServiceJobRequestT = Model::DescribeServiceJobRequest>
        Model::DescribeServiceJobOutcomeCallable DescribeServiceJobCallable(const DescribeServiceJobRequestT& request) const
        {
            return SubmitCallable(&BatchClient::DescribeServiceJob, request);
        }

        /**
         * An Async wrapper for DescribeServiceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServiceJobRequestT = Model::DescribeServiceJobRequest>
        void DescribeServiceJobAsync(const DescribeServiceJobRequestT& request, const DescribeServiceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::DescribeServiceJob, request, handler, context);
        }

        /**
         * <p>Provides a list of the first 100 <code>RUNNABLE</code> jobs associated to a
         * single job queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/GetJobQueueSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobQueueSnapshotOutcome GetJobQueueSnapshot(const Model::GetJobQueueSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetJobQueueSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobQueueSnapshotRequestT = Model::GetJobQueueSnapshotRequest>
        Model::GetJobQueueSnapshotOutcomeCallable GetJobQueueSnapshotCallable(const GetJobQueueSnapshotRequestT& request) const
        {
            return SubmitCallable(&BatchClient::GetJobQueueSnapshot, request);
        }

        /**
         * An Async wrapper for GetJobQueueSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobQueueSnapshotRequestT = Model::GetJobQueueSnapshotRequest>
        void GetJobQueueSnapshotAsync(const GetJobQueueSnapshotRequestT& request, const GetJobQueueSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::GetJobQueueSnapshot, request, handler, context);
        }

        /**
         * <p>Returns a list of Batch consumable resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListConsumableResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConsumableResourcesOutcome ListConsumableResources(const Model::ListConsumableResourcesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConsumableResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConsumableResourcesRequestT = Model::ListConsumableResourcesRequest>
        Model::ListConsumableResourcesOutcomeCallable ListConsumableResourcesCallable(const ListConsumableResourcesRequestT& request = {}) const
        {
            return SubmitCallable(&BatchClient::ListConsumableResources, request);
        }

        /**
         * An Async wrapper for ListConsumableResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConsumableResourcesRequestT = Model::ListConsumableResourcesRequest>
        void ListConsumableResourcesAsync(const ListConsumableResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConsumableResourcesRequestT& request = {}) const
        {
            return SubmitAsync(&BatchClient::ListConsumableResources, request, handler, context);
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
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BatchClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BatchClient::ListJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of Batch jobs that require a specific consumable
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListJobsByConsumableResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsByConsumableResourceOutcome ListJobsByConsumableResource(const Model::ListJobsByConsumableResourceRequest& request) const;

        /**
         * A Callable wrapper for ListJobsByConsumableResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsByConsumableResourceRequestT = Model::ListJobsByConsumableResourceRequest>
        Model::ListJobsByConsumableResourceOutcomeCallable ListJobsByConsumableResourceCallable(const ListJobsByConsumableResourceRequestT& request) const
        {
            return SubmitCallable(&BatchClient::ListJobsByConsumableResource, request);
        }

        /**
         * An Async wrapper for ListJobsByConsumableResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsByConsumableResourceRequestT = Model::ListJobsByConsumableResourceRequest>
        void ListJobsByConsumableResourceAsync(const ListJobsByConsumableResourceRequestT& request, const ListJobsByConsumableResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::ListJobsByConsumableResource, request, handler, context);
        }

        /**
         * <p>Returns a list of Batch scheduling policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListSchedulingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchedulingPoliciesOutcome ListSchedulingPolicies(const Model::ListSchedulingPoliciesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSchedulingPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchedulingPoliciesRequestT = Model::ListSchedulingPoliciesRequest>
        Model::ListSchedulingPoliciesOutcomeCallable ListSchedulingPoliciesCallable(const ListSchedulingPoliciesRequestT& request = {}) const
        {
            return SubmitCallable(&BatchClient::ListSchedulingPolicies, request);
        }

        /**
         * An Async wrapper for ListSchedulingPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchedulingPoliciesRequestT = Model::ListSchedulingPoliciesRequest>
        void ListSchedulingPoliciesAsync(const ListSchedulingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSchedulingPoliciesRequestT& request = {}) const
        {
            return SubmitAsync(&BatchClient::ListSchedulingPolicies, request, handler, context);
        }

        /**
         * <p>Returns a list of service jobs for a specified job queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListServiceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceJobsOutcome ListServiceJobs(const Model::ListServiceJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListServiceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceJobsRequestT = Model::ListServiceJobsRequest>
        Model::ListServiceJobsOutcomeCallable ListServiceJobsCallable(const ListServiceJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BatchClient::ListServiceJobs, request);
        }

        /**
         * An Async wrapper for ListServiceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceJobsRequestT = Model::ListServiceJobsRequest>
        void ListServiceJobsAsync(const ListServiceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListServiceJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BatchClient::ListServiceJobs, request, handler, context);
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
         * queues with a scheduling policy are limited to 500 active share identifiers at a
         * time. </p>   <p>Jobs that run on Fargate resources can't be
         * guaranteed to run for more than 14 days. This is because, after 14 days, Fargate
         * resources might become unavailable and job might be terminated.</p>
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
         * <p>Submits a service job to a specified job queue to run on SageMaker AI. A
         * service job is a unit of work that you submit to Batch for execution on
         * SageMaker AI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/SubmitServiceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitServiceJobOutcome SubmitServiceJob(const Model::SubmitServiceJobRequest& request) const;

        /**
         * A Callable wrapper for SubmitServiceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitServiceJobRequestT = Model::SubmitServiceJobRequest>
        Model::SubmitServiceJobOutcomeCallable SubmitServiceJobCallable(const SubmitServiceJobRequestT& request) const
        {
            return SubmitCallable(&BatchClient::SubmitServiceJob, request);
        }

        /**
         * An Async wrapper for SubmitServiceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitServiceJobRequestT = Model::SubmitServiceJobRequest>
        void SubmitServiceJobAsync(const SubmitServiceJobRequestT& request, const SubmitServiceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::SubmitServiceJob, request, handler, context);
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
         * <p>Terminates a service job in a job queue. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TerminateServiceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateServiceJobOutcome TerminateServiceJob(const Model::TerminateServiceJobRequest& request) const;

        /**
         * A Callable wrapper for TerminateServiceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateServiceJobRequestT = Model::TerminateServiceJobRequest>
        Model::TerminateServiceJobOutcomeCallable TerminateServiceJobCallable(const TerminateServiceJobRequestT& request) const
        {
            return SubmitCallable(&BatchClient::TerminateServiceJob, request);
        }

        /**
         * An Async wrapper for TerminateServiceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateServiceJobRequestT = Model::TerminateServiceJobRequest>
        void TerminateServiceJobAsync(const TerminateServiceJobRequestT& request, const TerminateServiceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::TerminateServiceJob, request, handler, context);
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
         * <p>Updates a consumable resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateConsumableResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConsumableResourceOutcome UpdateConsumableResource(const Model::UpdateConsumableResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateConsumableResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConsumableResourceRequestT = Model::UpdateConsumableResourceRequest>
        Model::UpdateConsumableResourceOutcomeCallable UpdateConsumableResourceCallable(const UpdateConsumableResourceRequestT& request) const
        {
            return SubmitCallable(&BatchClient::UpdateConsumableResource, request);
        }

        /**
         * An Async wrapper for UpdateConsumableResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConsumableResourceRequestT = Model::UpdateConsumableResourceRequest>
        void UpdateConsumableResourceAsync(const UpdateConsumableResourceRequestT& request, const UpdateConsumableResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::UpdateConsumableResource, request, handler, context);
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

        /**
         * <p>Updates a service environment. You can update the state of a service
         * environment from <code>ENABLED</code> to <code>DISABLED</code> to prevent new
         * service jobs from being placed in the service environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateServiceEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceEnvironmentOutcome UpdateServiceEnvironment(const Model::UpdateServiceEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceEnvironmentRequestT = Model::UpdateServiceEnvironmentRequest>
        Model::UpdateServiceEnvironmentOutcomeCallable UpdateServiceEnvironmentCallable(const UpdateServiceEnvironmentRequestT& request) const
        {
            return SubmitCallable(&BatchClient::UpdateServiceEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateServiceEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceEnvironmentRequestT = Model::UpdateServiceEnvironmentRequest>
        void UpdateServiceEnvironmentAsync(const UpdateServiceEnvironmentRequestT& request, const UpdateServiceEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BatchClient::UpdateServiceEnvironment, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BatchEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BatchClient>;
      void init(const BatchClientConfiguration& clientConfiguration);

      BatchClientConfiguration m_clientConfiguration;
      std::shared_ptr<BatchEndpointProviderBase> m_endpointProvider;
  };

} // namespace Batch
} // namespace Aws
