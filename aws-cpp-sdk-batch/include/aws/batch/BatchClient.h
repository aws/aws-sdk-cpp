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
#include <aws/batch/model/DeleteComputeEnvironmentResult.h>
#include <aws/batch/model/DeleteJobQueueResult.h>
#include <aws/batch/model/DeregisterJobDefinitionResult.h>
#include <aws/batch/model/DescribeComputeEnvironmentsResult.h>
#include <aws/batch/model/DescribeJobDefinitionsResult.h>
#include <aws/batch/model/DescribeJobQueuesResult.h>
#include <aws/batch/model/DescribeJobsResult.h>
#include <aws/batch/model/ListJobsResult.h>
#include <aws/batch/model/RegisterJobDefinitionResult.h>
#include <aws/batch/model/SubmitJobResult.h>
#include <aws/batch/model/TerminateJobResult.h>
#include <aws/batch/model/UpdateComputeEnvironmentResult.h>
#include <aws/batch/model/UpdateJobQueueResult.h>
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
        class DeleteComputeEnvironmentRequest;
        class DeleteJobQueueRequest;
        class DeregisterJobDefinitionRequest;
        class DescribeComputeEnvironmentsRequest;
        class DescribeJobDefinitionsRequest;
        class DescribeJobQueuesRequest;
        class DescribeJobsRequest;
        class ListJobsRequest;
        class RegisterJobDefinitionRequest;
        class SubmitJobRequest;
        class TerminateJobRequest;
        class UpdateComputeEnvironmentRequest;
        class UpdateJobQueueRequest;

        typedef Aws::Utils::Outcome<CancelJobResult, Aws::Client::AWSError<BatchErrors>> CancelJobOutcome;
        typedef Aws::Utils::Outcome<CreateComputeEnvironmentResult, Aws::Client::AWSError<BatchErrors>> CreateComputeEnvironmentOutcome;
        typedef Aws::Utils::Outcome<CreateJobQueueResult, Aws::Client::AWSError<BatchErrors>> CreateJobQueueOutcome;
        typedef Aws::Utils::Outcome<DeleteComputeEnvironmentResult, Aws::Client::AWSError<BatchErrors>> DeleteComputeEnvironmentOutcome;
        typedef Aws::Utils::Outcome<DeleteJobQueueResult, Aws::Client::AWSError<BatchErrors>> DeleteJobQueueOutcome;
        typedef Aws::Utils::Outcome<DeregisterJobDefinitionResult, Aws::Client::AWSError<BatchErrors>> DeregisterJobDefinitionOutcome;
        typedef Aws::Utils::Outcome<DescribeComputeEnvironmentsResult, Aws::Client::AWSError<BatchErrors>> DescribeComputeEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<DescribeJobDefinitionsResult, Aws::Client::AWSError<BatchErrors>> DescribeJobDefinitionsOutcome;
        typedef Aws::Utils::Outcome<DescribeJobQueuesResult, Aws::Client::AWSError<BatchErrors>> DescribeJobQueuesOutcome;
        typedef Aws::Utils::Outcome<DescribeJobsResult, Aws::Client::AWSError<BatchErrors>> DescribeJobsOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, Aws::Client::AWSError<BatchErrors>> ListJobsOutcome;
        typedef Aws::Utils::Outcome<RegisterJobDefinitionResult, Aws::Client::AWSError<BatchErrors>> RegisterJobDefinitionOutcome;
        typedef Aws::Utils::Outcome<SubmitJobResult, Aws::Client::AWSError<BatchErrors>> SubmitJobOutcome;
        typedef Aws::Utils::Outcome<TerminateJobResult, Aws::Client::AWSError<BatchErrors>> TerminateJobOutcome;
        typedef Aws::Utils::Outcome<UpdateComputeEnvironmentResult, Aws::Client::AWSError<BatchErrors>> UpdateComputeEnvironmentOutcome;
        typedef Aws::Utils::Outcome<UpdateJobQueueResult, Aws::Client::AWSError<BatchErrors>> UpdateJobQueueOutcome;

        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateComputeEnvironmentOutcome> CreateComputeEnvironmentOutcomeCallable;
        typedef std::future<CreateJobQueueOutcome> CreateJobQueueOutcomeCallable;
        typedef std::future<DeleteComputeEnvironmentOutcome> DeleteComputeEnvironmentOutcomeCallable;
        typedef std::future<DeleteJobQueueOutcome> DeleteJobQueueOutcomeCallable;
        typedef std::future<DeregisterJobDefinitionOutcome> DeregisterJobDefinitionOutcomeCallable;
        typedef std::future<DescribeComputeEnvironmentsOutcome> DescribeComputeEnvironmentsOutcomeCallable;
        typedef std::future<DescribeJobDefinitionsOutcome> DescribeJobDefinitionsOutcomeCallable;
        typedef std::future<DescribeJobQueuesOutcome> DescribeJobQueuesOutcomeCallable;
        typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<RegisterJobDefinitionOutcome> RegisterJobDefinitionOutcomeCallable;
        typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;
        typedef std::future<TerminateJobOutcome> TerminateJobOutcomeCallable;
        typedef std::future<UpdateComputeEnvironmentOutcome> UpdateComputeEnvironmentOutcomeCallable;
        typedef std::future<UpdateJobQueueOutcome> UpdateJobQueueOutcomeCallable;
} // namespace Model

  class BatchClient;

    typedef std::function<void(const BatchClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateComputeEnvironmentRequest&, const Model::CreateComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateJobQueueRequest&, const Model::CreateJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteComputeEnvironmentRequest&, const Model::DeleteComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteJobQueueRequest&, const Model::DeleteJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeregisterJobDefinitionRequest&, const Model::DeregisterJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvironmentsRequest&, const Model::DescribeComputeEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComputeEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobDefinitionsRequest&, const Model::DescribeJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobQueuesRequest&, const Model::DescribeJobQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobQueuesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobsRequest&, const Model::DescribeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::RegisterJobDefinitionRequest&, const Model::RegisterJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::SubmitJobRequest&, const Model::SubmitJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::TerminateJobRequest&, const Model::TerminateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateComputeEnvironmentRequest&, const Model::UpdateComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateJobQueueRequest&, const Model::UpdateJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobQueueResponseReceivedHandler;

  /**
   * <p>AWS Batch enables you to run batch computing workloads on the AWS Cloud.
   * Batch computing is a common way for developers, scientists, and engineers to
   * access large amounts of compute resources, and AWS Batch removes the
   * undifferentiated heavy lifting of configuring and managing the required
   * infrastructure. AWS Batch will be familiar to users of traditional batch
   * computing software. This service can efficiently provision resources in response
   * to jobs submitted in order to eliminate capacity constraints, reduce compute
   * costs, and deliver results quickly.</p> <p>As a fully managed service, AWS Batch
   * enables developers, scientists, and engineers to run batch computing workloads
   * of any scale. AWS Batch automatically provisions compute resources and optimizes
   * the workload distribution based on the quantity and scale of the workloads. With
   * AWS Batch, there is no need to install or manage batch computing software, which
   * allows you to focus on analyzing results and solving problems. AWS Batch reduces
   * operational complexities, saves time, and reduces costs, which makes it easy for
   * developers, scientists, and engineers to run their batch jobs in the AWS
   * Cloud.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "Batch"; }


        /**
         * <p>Cancels a job in an AWS Batch job queue. Jobs that are in the
         * <code>SUBMITTED</code>, <code>PENDING</code>, or <code>RUNNABLE</code> state are
         * cancelled. Jobs that have progressed to <code>STARTING</code> or
         * <code>RUNNING</code> are not cancelled (but the API operation still succeeds,
         * even if no job is cancelled); these jobs must be terminated with the
         * <a>TerminateJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CancelJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * <p>Cancels a job in an AWS Batch job queue. Jobs that are in the
         * <code>SUBMITTED</code>, <code>PENDING</code>, or <code>RUNNABLE</code> state are
         * cancelled. Jobs that have progressed to <code>STARTING</code> or
         * <code>RUNNING</code> are not cancelled (but the API operation still succeeds,
         * even if no job is cancelled); these jobs must be terminated with the
         * <a>TerminateJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CancelJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * <p>Cancels a job in an AWS Batch job queue. Jobs that are in the
         * <code>SUBMITTED</code>, <code>PENDING</code>, or <code>RUNNABLE</code> state are
         * cancelled. Jobs that have progressed to <code>STARTING</code> or
         * <code>RUNNING</code> are not cancelled (but the API operation still succeeds,
         * even if no job is cancelled); these jobs must be terminated with the
         * <a>TerminateJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CancelJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS Batch compute environment. You can create <code>MANAGED</code>
         * or <code>UNMANAGED</code> compute environments.</p> <p>In a managed compute
         * environment, AWS Batch manages the capacity and instance types of the compute
         * resources within the environment. This is based on the compute resource
         * specification that you define or the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">launch
         * template</a> that you specify when you create the compute environment. You can
         * choose to use Amazon EC2 On-Demand Instances or Spot Instances in your managed
         * compute environment. You can optionally set a maximum price so that Spot
         * Instances only launch when the Spot Instance price is below a specified
         * percentage of the On-Demand price.</p> <note> <p>Multi-node parallel jobs are
         * not supported on Spot Instances.</p> </note> <p>In an unmanaged compute
         * environment, you can manage your own compute resources. This provides more
         * compute resource configuration options, such as using a custom AMI, but you must
         * ensure that your AMI meets the Amazon ECS container instance AMI specification.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container_instance_AMIs.html">Container
         * Instance AMIs</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>. After you have created your unmanaged compute environment, you can
         * use the <a>DescribeComputeEnvironments</a> operation to find the Amazon ECS
         * cluster that is associated with it. Then, manually launch your container
         * instances into that Amazon ECS cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_container_instance.html">Launching
         * an Amazon ECS Container Instance</a> in the <i>Amazon Elastic Container Service
         * Developer Guide</i>.</p> <note> <p>AWS Batch does not upgrade the AMIs in a
         * compute environment after it is created (for example, when a newer version of
         * the Amazon ECS-optimized AMI is available). You are responsible for the
         * management of the guest operating system (including updates and security
         * patches) and any additional application software or utilities that you install
         * on the compute resources. To use a new AMI for your AWS Batch jobs:</p> <ol>
         * <li> <p>Create a new compute environment with the new AMI.</p> </li> <li> <p>Add
         * the compute environment to an existing job queue.</p> </li> <li> <p>Remove the
         * old compute environment from your job queue.</p> </li> <li> <p>Delete the old
         * compute environment.</p> </li> </ol> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateComputeEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComputeEnvironmentOutcome CreateComputeEnvironment(const Model::CreateComputeEnvironmentRequest& request) const;

        /**
         * <p>Creates an AWS Batch compute environment. You can create <code>MANAGED</code>
         * or <code>UNMANAGED</code> compute environments.</p> <p>In a managed compute
         * environment, AWS Batch manages the capacity and instance types of the compute
         * resources within the environment. This is based on the compute resource
         * specification that you define or the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">launch
         * template</a> that you specify when you create the compute environment. You can
         * choose to use Amazon EC2 On-Demand Instances or Spot Instances in your managed
         * compute environment. You can optionally set a maximum price so that Spot
         * Instances only launch when the Spot Instance price is below a specified
         * percentage of the On-Demand price.</p> <note> <p>Multi-node parallel jobs are
         * not supported on Spot Instances.</p> </note> <p>In an unmanaged compute
         * environment, you can manage your own compute resources. This provides more
         * compute resource configuration options, such as using a custom AMI, but you must
         * ensure that your AMI meets the Amazon ECS container instance AMI specification.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container_instance_AMIs.html">Container
         * Instance AMIs</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>. After you have created your unmanaged compute environment, you can
         * use the <a>DescribeComputeEnvironments</a> operation to find the Amazon ECS
         * cluster that is associated with it. Then, manually launch your container
         * instances into that Amazon ECS cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_container_instance.html">Launching
         * an Amazon ECS Container Instance</a> in the <i>Amazon Elastic Container Service
         * Developer Guide</i>.</p> <note> <p>AWS Batch does not upgrade the AMIs in a
         * compute environment after it is created (for example, when a newer version of
         * the Amazon ECS-optimized AMI is available). You are responsible for the
         * management of the guest operating system (including updates and security
         * patches) and any additional application software or utilities that you install
         * on the compute resources. To use a new AMI for your AWS Batch jobs:</p> <ol>
         * <li> <p>Create a new compute environment with the new AMI.</p> </li> <li> <p>Add
         * the compute environment to an existing job queue.</p> </li> <li> <p>Remove the
         * old compute environment from your job queue.</p> </li> <li> <p>Delete the old
         * compute environment.</p> </li> </ol> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateComputeEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComputeEnvironmentOutcomeCallable CreateComputeEnvironmentCallable(const Model::CreateComputeEnvironmentRequest& request) const;

        /**
         * <p>Creates an AWS Batch compute environment. You can create <code>MANAGED</code>
         * or <code>UNMANAGED</code> compute environments.</p> <p>In a managed compute
         * environment, AWS Batch manages the capacity and instance types of the compute
         * resources within the environment. This is based on the compute resource
         * specification that you define or the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">launch
         * template</a> that you specify when you create the compute environment. You can
         * choose to use Amazon EC2 On-Demand Instances or Spot Instances in your managed
         * compute environment. You can optionally set a maximum price so that Spot
         * Instances only launch when the Spot Instance price is below a specified
         * percentage of the On-Demand price.</p> <note> <p>Multi-node parallel jobs are
         * not supported on Spot Instances.</p> </note> <p>In an unmanaged compute
         * environment, you can manage your own compute resources. This provides more
         * compute resource configuration options, such as using a custom AMI, but you must
         * ensure that your AMI meets the Amazon ECS container instance AMI specification.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container_instance_AMIs.html">Container
         * Instance AMIs</a> in the <i>Amazon Elastic Container Service Developer
         * Guide</i>. After you have created your unmanaged compute environment, you can
         * use the <a>DescribeComputeEnvironments</a> operation to find the Amazon ECS
         * cluster that is associated with it. Then, manually launch your container
         * instances into that Amazon ECS cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_container_instance.html">Launching
         * an Amazon ECS Container Instance</a> in the <i>Amazon Elastic Container Service
         * Developer Guide</i>.</p> <note> <p>AWS Batch does not upgrade the AMIs in a
         * compute environment after it is created (for example, when a newer version of
         * the Amazon ECS-optimized AMI is available). You are responsible for the
         * management of the guest operating system (including updates and security
         * patches) and any additional application software or utilities that you install
         * on the compute resources. To use a new AMI for your AWS Batch jobs:</p> <ol>
         * <li> <p>Create a new compute environment with the new AMI.</p> </li> <li> <p>Add
         * the compute environment to an existing job queue.</p> </li> <li> <p>Remove the
         * old compute environment from your job queue.</p> </li> <li> <p>Delete the old
         * compute environment.</p> </li> </ol> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateComputeEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComputeEnvironmentAsync(const Model::CreateComputeEnvironmentRequest& request, const CreateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS Batch job queue. When you create a job queue, you associate
         * one or more compute environments to the queue and assign an order of preference
         * for the compute environments.</p> <p>You also set a priority to the job queue
         * that determines the order in which the AWS Batch scheduler places jobs onto its
         * associated compute environments. For example, if a compute environment is
         * associated with more than one job queue, the job queue with a higher priority is
         * given preference for scheduling jobs to that compute environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateJobQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobQueueOutcome CreateJobQueue(const Model::CreateJobQueueRequest& request) const;

        /**
         * <p>Creates an AWS Batch job queue. When you create a job queue, you associate
         * one or more compute environments to the queue and assign an order of preference
         * for the compute environments.</p> <p>You also set a priority to the job queue
         * that determines the order in which the AWS Batch scheduler places jobs onto its
         * associated compute environments. For example, if a compute environment is
         * associated with more than one job queue, the job queue with a higher priority is
         * given preference for scheduling jobs to that compute environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateJobQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobQueueOutcomeCallable CreateJobQueueCallable(const Model::CreateJobQueueRequest& request) const;

        /**
         * <p>Creates an AWS Batch job queue. When you create a job queue, you associate
         * one or more compute environments to the queue and assign an order of preference
         * for the compute environments.</p> <p>You also set a priority to the job queue
         * that determines the order in which the AWS Batch scheduler places jobs onto its
         * associated compute environments. For example, if a compute environment is
         * associated with more than one job queue, the job queue with a higher priority is
         * given preference for scheduling jobs to that compute environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateJobQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobQueueAsync(const Model::CreateJobQueueRequest& request, const CreateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Batch compute environment.</p> <p>Before you can delete a
         * compute environment, you must set its state to <code>DISABLED</code> with the
         * <a>UpdateComputeEnvironment</a> API operation and disassociate it from any job
         * queues with the <a>UpdateJobQueue</a> API operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteComputeEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComputeEnvironmentOutcome DeleteComputeEnvironment(const Model::DeleteComputeEnvironmentRequest& request) const;

        /**
         * <p>Deletes an AWS Batch compute environment.</p> <p>Before you can delete a
         * compute environment, you must set its state to <code>DISABLED</code> with the
         * <a>UpdateComputeEnvironment</a> API operation and disassociate it from any job
         * queues with the <a>UpdateJobQueue</a> API operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteComputeEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteComputeEnvironmentOutcomeCallable DeleteComputeEnvironmentCallable(const Model::DeleteComputeEnvironmentRequest& request) const;

        /**
         * <p>Deletes an AWS Batch compute environment.</p> <p>Before you can delete a
         * compute environment, you must set its state to <code>DISABLED</code> with the
         * <a>UpdateComputeEnvironment</a> API operation and disassociate it from any job
         * queues with the <a>UpdateJobQueue</a> API operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteComputeEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComputeEnvironmentAsync(const Model::DeleteComputeEnvironmentRequest& request, const DeleteComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified job queue. You must first disable submissions for a
         * queue with the <a>UpdateJobQueue</a> operation. All jobs in the queue are
         * terminated when you delete a job queue.</p> <p>It is not necessary to
         * disassociate compute environments from a queue before submitting a
         * <code>DeleteJobQueue</code> request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteJobQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobQueueOutcome DeleteJobQueue(const Model::DeleteJobQueueRequest& request) const;

        /**
         * <p>Deletes the specified job queue. You must first disable submissions for a
         * queue with the <a>UpdateJobQueue</a> operation. All jobs in the queue are
         * terminated when you delete a job queue.</p> <p>It is not necessary to
         * disassociate compute environments from a queue before submitting a
         * <code>DeleteJobQueue</code> request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteJobQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobQueueOutcomeCallable DeleteJobQueueCallable(const Model::DeleteJobQueueRequest& request) const;

        /**
         * <p>Deletes the specified job queue. You must first disable submissions for a
         * queue with the <a>UpdateJobQueue</a> operation. All jobs in the queue are
         * terminated when you delete a job queue.</p> <p>It is not necessary to
         * disassociate compute environments from a queue before submitting a
         * <code>DeleteJobQueue</code> request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteJobQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobQueueAsync(const Model::DeleteJobQueueRequest& request, const DeleteJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an AWS Batch job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeregisterJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterJobDefinitionOutcome DeregisterJobDefinition(const Model::DeregisterJobDefinitionRequest& request) const;

        /**
         * <p>Deregisters an AWS Batch job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeregisterJobDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterJobDefinitionOutcomeCallable DeregisterJobDefinitionCallable(const Model::DeregisterJobDefinitionRequest& request) const;

        /**
         * <p>Deregisters an AWS Batch job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeregisterJobDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterJobDefinitionAsync(const Model::DeregisterJobDefinitionRequest& request, const DeregisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your compute environments.</p> <p>If you are using
         * an unmanaged compute environment, you can use the
         * <code>DescribeComputeEnvironment</code> operation to determine the
         * <code>ecsClusterArn</code> that you should launch your Amazon ECS container
         * instances into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeComputeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComputeEnvironmentsOutcome DescribeComputeEnvironments(const Model::DescribeComputeEnvironmentsRequest& request) const;

        /**
         * <p>Describes one or more of your compute environments.</p> <p>If you are using
         * an unmanaged compute environment, you can use the
         * <code>DescribeComputeEnvironment</code> operation to determine the
         * <code>ecsClusterArn</code> that you should launch your Amazon ECS container
         * instances into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeComputeEnvironments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComputeEnvironmentsOutcomeCallable DescribeComputeEnvironmentsCallable(const Model::DescribeComputeEnvironmentsRequest& request) const;

        /**
         * <p>Describes one or more of your compute environments.</p> <p>If you are using
         * an unmanaged compute environment, you can use the
         * <code>DescribeComputeEnvironment</code> operation to determine the
         * <code>ecsClusterArn</code> that you should launch your Amazon ECS container
         * instances into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeComputeEnvironments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Describes a list of job definitions. You can specify a <code>status</code>
         * (such as <code>ACTIVE</code>) to only return job definitions that match that
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobDefinitionsOutcomeCallable DescribeJobDefinitionsCallable(const Model::DescribeJobDefinitionsRequest& request) const;

        /**
         * <p>Describes a list of job definitions. You can specify a <code>status</code>
         * (such as <code>ACTIVE</code>) to only return job definitions that match that
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobDefinitionsAsync(const Model::DescribeJobDefinitionsRequest& request, const DescribeJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your job queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobQueuesOutcome DescribeJobQueues(const Model::DescribeJobQueuesRequest& request) const;

        /**
         * <p>Describes one or more of your job queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobQueuesOutcomeCallable DescribeJobQueuesCallable(const Model::DescribeJobQueuesRequest& request) const;

        /**
         * <p>Describes one or more of your job queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobQueuesAsync(const Model::DescribeJobQueuesRequest& request, const DescribeJobQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a list of AWS Batch jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest& request) const;

        /**
         * <p>Describes a list of AWS Batch jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request) const;

        /**
         * <p>Describes a list of AWS Batch jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of AWS Batch jobs.</p> <p>You must specify only one of the
         * following:</p> <ul> <li> <p>a job queue ID to return a list of jobs in that job
         * queue</p> </li> <li> <p>a multi-node parallel job ID to return a list of that
         * job's nodes</p> </li> <li> <p>an array job ID to return a list of that job's
         * children</p> </li> </ul> <p>You can filter the results by job status with the
         * <code>jobStatus</code> parameter. If you do not specify a status, only
         * <code>RUNNING</code> jobs are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Returns a list of AWS Batch jobs.</p> <p>You must specify only one of the
         * following:</p> <ul> <li> <p>a job queue ID to return a list of jobs in that job
         * queue</p> </li> <li> <p>a multi-node parallel job ID to return a list of that
         * job's nodes</p> </li> <li> <p>an array job ID to return a list of that job's
         * children</p> </li> </ul> <p>You can filter the results by job status with the
         * <code>jobStatus</code> parameter. If you do not specify a status, only
         * <code>RUNNING</code> jobs are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListJobs">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Returns a list of AWS Batch jobs.</p> <p>You must specify only one of the
         * following:</p> <ul> <li> <p>a job queue ID to return a list of jobs in that job
         * queue</p> </li> <li> <p>a multi-node parallel job ID to return a list of that
         * job's nodes</p> </li> <li> <p>an array job ID to return a list of that job's
         * children</p> </li> </ul> <p>You can filter the results by job status with the
         * <code>jobStatus</code> parameter. If you do not specify a status, only
         * <code>RUNNING</code> jobs are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListJobs">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an AWS Batch job definition. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RegisterJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterJobDefinitionOutcome RegisterJobDefinition(const Model::RegisterJobDefinitionRequest& request) const;

        /**
         * <p>Registers an AWS Batch job definition. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RegisterJobDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterJobDefinitionOutcomeCallable RegisterJobDefinitionCallable(const Model::RegisterJobDefinitionRequest& request) const;

        /**
         * <p>Registers an AWS Batch job definition. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RegisterJobDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterJobDefinitionAsync(const Model::RegisterJobDefinitionRequest& request, const RegisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits an AWS Batch job from a job definition. Parameters specified during
         * <a>SubmitJob</a> override parameters defined in the job definition.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/SubmitJob">AWS API
         * Reference</a></p>
         */
        virtual Model::SubmitJobOutcome SubmitJob(const Model::SubmitJobRequest& request) const;

        /**
         * <p>Submits an AWS Batch job from a job definition. Parameters specified during
         * <a>SubmitJob</a> override parameters defined in the job definition.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/SubmitJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitJobOutcomeCallable SubmitJobCallable(const Model::SubmitJobRequest& request) const;

        /**
         * <p>Submits an AWS Batch job from a job definition. Parameters specified during
         * <a>SubmitJob</a> override parameters defined in the job definition.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/SubmitJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubmitJobAsync(const Model::SubmitJobRequest& request, const SubmitJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Terminates a job in a job queue. Jobs that are in the <code>STARTING</code>
         * or <code>RUNNING</code> state are terminated, which causes them to transition to
         * <code>FAILED</code>. Jobs that have not progressed to the <code>STARTING</code>
         * state are cancelled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TerminateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateJobOutcomeCallable TerminateJobCallable(const Model::TerminateJobRequest& request) const;

        /**
         * <p>Terminates a job in a job queue. Jobs that are in the <code>STARTING</code>
         * or <code>RUNNING</code> state are terminated, which causes them to transition to
         * <code>FAILED</code>. Jobs that have not progressed to the <code>STARTING</code>
         * state are cancelled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TerminateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateJobAsync(const Model::TerminateJobRequest& request, const TerminateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an AWS Batch compute environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateComputeEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComputeEnvironmentOutcome UpdateComputeEnvironment(const Model::UpdateComputeEnvironmentRequest& request) const;

        /**
         * <p>Updates an AWS Batch compute environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateComputeEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateComputeEnvironmentOutcomeCallable UpdateComputeEnvironmentCallable(const Model::UpdateComputeEnvironmentRequest& request) const;

        /**
         * <p>Updates an AWS Batch compute environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateComputeEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComputeEnvironmentAsync(const Model::UpdateComputeEnvironmentRequest& request, const UpdateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a job queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateJobQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobQueueOutcome UpdateJobQueue(const Model::UpdateJobQueueRequest& request) const;

        /**
         * <p>Updates a job queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateJobQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobQueueOutcomeCallable UpdateJobQueueCallable(const Model::UpdateJobQueueRequest& request) const;

        /**
         * <p>Updates a job queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateJobQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobQueueAsync(const Model::UpdateJobQueueRequest& request, const UpdateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComputeEnvironmentAsyncHelper(const Model::CreateComputeEnvironmentRequest& request, const CreateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobQueueAsyncHelper(const Model::CreateJobQueueRequest& request, const CreateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteComputeEnvironmentAsyncHelper(const Model::DeleteComputeEnvironmentRequest& request, const DeleteComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobQueueAsyncHelper(const Model::DeleteJobQueueRequest& request, const DeleteJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterJobDefinitionAsyncHelper(const Model::DeregisterJobDefinitionRequest& request, const DeregisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComputeEnvironmentsAsyncHelper(const Model::DescribeComputeEnvironmentsRequest& request, const DescribeComputeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobDefinitionsAsyncHelper(const Model::DescribeJobDefinitionsRequest& request, const DescribeJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobQueuesAsyncHelper(const Model::DescribeJobQueuesRequest& request, const DescribeJobQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobsAsyncHelper(const Model::DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterJobDefinitionAsyncHelper(const Model::RegisterJobDefinitionRequest& request, const RegisterJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitJobAsyncHelper(const Model::SubmitJobRequest& request, const SubmitJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateJobAsyncHelper(const Model::TerminateJobRequest& request, const TerminateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateComputeEnvironmentAsyncHelper(const Model::UpdateComputeEnvironmentRequest& request, const UpdateComputeEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobQueueAsyncHelper(const Model::UpdateJobQueueRequest& request, const UpdateJobQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Batch
} // namespace Aws
