/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/CreateClusterResult.h>
#include <aws/ecs/model/CreateServiceResult.h>
#include <aws/ecs/model/DeleteClusterResult.h>
#include <aws/ecs/model/DeleteServiceResult.h>
#include <aws/ecs/model/DeregisterContainerInstanceResult.h>
#include <aws/ecs/model/DeregisterTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeClustersResult.h>
#include <aws/ecs/model/DescribeContainerInstancesResult.h>
#include <aws/ecs/model/DescribeServicesResult.h>
#include <aws/ecs/model/DescribeTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeTasksResult.h>
#include <aws/ecs/model/DiscoverPollEndpointResult.h>
#include <aws/ecs/model/ListClustersResult.h>
#include <aws/ecs/model/ListContainerInstancesResult.h>
#include <aws/ecs/model/ListServicesResult.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesResult.h>
#include <aws/ecs/model/ListTaskDefinitionsResult.h>
#include <aws/ecs/model/ListTasksResult.h>
#include <aws/ecs/model/RegisterContainerInstanceResult.h>
#include <aws/ecs/model/RegisterTaskDefinitionResult.h>
#include <aws/ecs/model/RunTaskResult.h>
#include <aws/ecs/model/StartTaskResult.h>
#include <aws/ecs/model/StopTaskResult.h>
#include <aws/ecs/model/SubmitContainerStateChangeResult.h>
#include <aws/ecs/model/SubmitTaskStateChangeResult.h>
#include <aws/ecs/model/UpdateContainerAgentResult.h>
#include <aws/ecs/model/UpdateServiceResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace ECS
{

namespace Model
{
        class CreateClusterRequest;
        class CreateServiceRequest;
        class DeleteClusterRequest;
        class DeleteServiceRequest;
        class DeregisterContainerInstanceRequest;
        class DeregisterTaskDefinitionRequest;
        class DescribeClustersRequest;
        class DescribeContainerInstancesRequest;
        class DescribeServicesRequest;
        class DescribeTaskDefinitionRequest;
        class DescribeTasksRequest;
        class DiscoverPollEndpointRequest;
        class ListClustersRequest;
        class ListContainerInstancesRequest;
        class ListServicesRequest;
        class ListTaskDefinitionFamiliesRequest;
        class ListTaskDefinitionsRequest;
        class ListTasksRequest;
        class RegisterContainerInstanceRequest;
        class RegisterTaskDefinitionRequest;
        class RunTaskRequest;
        class StartTaskRequest;
        class StopTaskRequest;
        class SubmitContainerStateChangeRequest;
        class SubmitTaskStateChangeRequest;
        class UpdateContainerAgentRequest;
        class UpdateServiceRequest;

        typedef Aws::Utils::Outcome<CreateClusterResult, Aws::Client::AWSError<ECSErrors>> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateServiceResult, Aws::Client::AWSError<ECSErrors>> CreateServiceOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, Aws::Client::AWSError<ECSErrors>> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteServiceResult, Aws::Client::AWSError<ECSErrors>> DeleteServiceOutcome;
        typedef Aws::Utils::Outcome<DeregisterContainerInstanceResult, Aws::Client::AWSError<ECSErrors>> DeregisterContainerInstanceOutcome;
        typedef Aws::Utils::Outcome<DeregisterTaskDefinitionResult, Aws::Client::AWSError<ECSErrors>> DeregisterTaskDefinitionOutcome;
        typedef Aws::Utils::Outcome<DescribeClustersResult, Aws::Client::AWSError<ECSErrors>> DescribeClustersOutcome;
        typedef Aws::Utils::Outcome<DescribeContainerInstancesResult, Aws::Client::AWSError<ECSErrors>> DescribeContainerInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeServicesResult, Aws::Client::AWSError<ECSErrors>> DescribeServicesOutcome;
        typedef Aws::Utils::Outcome<DescribeTaskDefinitionResult, Aws::Client::AWSError<ECSErrors>> DescribeTaskDefinitionOutcome;
        typedef Aws::Utils::Outcome<DescribeTasksResult, Aws::Client::AWSError<ECSErrors>> DescribeTasksOutcome;
        typedef Aws::Utils::Outcome<DiscoverPollEndpointResult, Aws::Client::AWSError<ECSErrors>> DiscoverPollEndpointOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, Aws::Client::AWSError<ECSErrors>> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListContainerInstancesResult, Aws::Client::AWSError<ECSErrors>> ListContainerInstancesOutcome;
        typedef Aws::Utils::Outcome<ListServicesResult, Aws::Client::AWSError<ECSErrors>> ListServicesOutcome;
        typedef Aws::Utils::Outcome<ListTaskDefinitionFamiliesResult, Aws::Client::AWSError<ECSErrors>> ListTaskDefinitionFamiliesOutcome;
        typedef Aws::Utils::Outcome<ListTaskDefinitionsResult, Aws::Client::AWSError<ECSErrors>> ListTaskDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListTasksResult, Aws::Client::AWSError<ECSErrors>> ListTasksOutcome;
        typedef Aws::Utils::Outcome<RegisterContainerInstanceResult, Aws::Client::AWSError<ECSErrors>> RegisterContainerInstanceOutcome;
        typedef Aws::Utils::Outcome<RegisterTaskDefinitionResult, Aws::Client::AWSError<ECSErrors>> RegisterTaskDefinitionOutcome;
        typedef Aws::Utils::Outcome<RunTaskResult, Aws::Client::AWSError<ECSErrors>> RunTaskOutcome;
        typedef Aws::Utils::Outcome<StartTaskResult, Aws::Client::AWSError<ECSErrors>> StartTaskOutcome;
        typedef Aws::Utils::Outcome<StopTaskResult, Aws::Client::AWSError<ECSErrors>> StopTaskOutcome;
        typedef Aws::Utils::Outcome<SubmitContainerStateChangeResult, Aws::Client::AWSError<ECSErrors>> SubmitContainerStateChangeOutcome;
        typedef Aws::Utils::Outcome<SubmitTaskStateChangeResult, Aws::Client::AWSError<ECSErrors>> SubmitTaskStateChangeOutcome;
        typedef Aws::Utils::Outcome<UpdateContainerAgentResult, Aws::Client::AWSError<ECSErrors>> UpdateContainerAgentOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceResult, Aws::Client::AWSError<ECSErrors>> UpdateServiceOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
        typedef std::future<DeregisterContainerInstanceOutcome> DeregisterContainerInstanceOutcomeCallable;
        typedef std::future<DeregisterTaskDefinitionOutcome> DeregisterTaskDefinitionOutcomeCallable;
        typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
        typedef std::future<DescribeContainerInstancesOutcome> DescribeContainerInstancesOutcomeCallable;
        typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
        typedef std::future<DescribeTaskDefinitionOutcome> DescribeTaskDefinitionOutcomeCallable;
        typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
        typedef std::future<DiscoverPollEndpointOutcome> DiscoverPollEndpointOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListContainerInstancesOutcome> ListContainerInstancesOutcomeCallable;
        typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
        typedef std::future<ListTaskDefinitionFamiliesOutcome> ListTaskDefinitionFamiliesOutcomeCallable;
        typedef std::future<ListTaskDefinitionsOutcome> ListTaskDefinitionsOutcomeCallable;
        typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
        typedef std::future<RegisterContainerInstanceOutcome> RegisterContainerInstanceOutcomeCallable;
        typedef std::future<RegisterTaskDefinitionOutcome> RegisterTaskDefinitionOutcomeCallable;
        typedef std::future<RunTaskOutcome> RunTaskOutcomeCallable;
        typedef std::future<StartTaskOutcome> StartTaskOutcomeCallable;
        typedef std::future<StopTaskOutcome> StopTaskOutcomeCallable;
        typedef std::future<SubmitContainerStateChangeOutcome> SubmitContainerStateChangeOutcomeCallable;
        typedef std::future<SubmitTaskStateChangeOutcome> SubmitTaskStateChangeOutcomeCallable;
        typedef std::future<UpdateContainerAgentOutcome> UpdateContainerAgentOutcomeCallable;
        typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
} // namespace Model

  class ECSClient;

    typedef std::function<void(const ECSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeregisterContainerInstanceRequest&, const Model::DeregisterContainerInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterContainerInstanceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeregisterTaskDefinitionRequest&, const Model::DeregisterTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeContainerInstancesRequest&, const Model::DescribeContainerInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContainerInstancesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeServicesRequest&, const Model::DescribeServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServicesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeTaskDefinitionRequest&, const Model::DescribeTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeTasksRequest&, const Model::DescribeTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTasksResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DiscoverPollEndpointRequest&, const Model::DiscoverPollEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverPollEndpointResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListContainerInstancesRequest&, const Model::ListContainerInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContainerInstancesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTaskDefinitionFamiliesRequest&, const Model::ListTaskDefinitionFamiliesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskDefinitionFamiliesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTaskDefinitionsRequest&, const Model::ListTaskDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskDefinitionsResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RegisterContainerInstanceRequest&, const Model::RegisterContainerInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterContainerInstanceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RegisterTaskDefinitionRequest&, const Model::RegisterTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RunTaskRequest&, const Model::RunTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::StartTaskRequest&, const Model::StartTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::StopTaskRequest&, const Model::StopTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitContainerStateChangeRequest&, const Model::SubmitContainerStateChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitContainerStateChangeResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitTaskStateChangeRequest&, const Model::SubmitTaskStateChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitTaskStateChangeResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateContainerAgentRequest&, const Model::UpdateContainerAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContainerAgentResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceResponseReceivedHandler;

  /**
   * <p>Amazon EC2 Container Service (Amazon ECS) is a highly scalable, fast,
   * container management service that makes it easy to run, stop, and manage Docker
   * containers on a cluster of EC2 instances. Amazon ECS lets you launch and stop
   * container-enabled applications with simple API calls, allows you to get the
   * state of your cluster from a centralized service, and gives you access to many
   * familiar Amazon EC2 features like security groups, Amazon EBS volumes, and IAM
   * roles.</p> <p>You can use Amazon ECS to schedule the placement of containers
   * across your cluster based on your resource needs, isolation policies, and
   * availability requirements. Amazon EC2 Container Service eliminates the need for
   * you to operate your own cluster management and configuration management systems
   * or worry about scaling your management infrastructure.</p>
   */
  class AWS_ECS_API ECSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECSClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECSClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECSClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~ECSClient();

        /**
         * <p>Creates a new Amazon ECS cluster. By default, your account receives a
         * <code>default</code> cluster when you launch your first container instance.
         * However, you can create your own cluster with a unique name with the
         * <code>CreateCluster</code> action.</p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon ECS cluster. By default, your account receives a
         * <code>default</code> cluster when you launch your first container instance.
         * However, you can create your own cluster with a unique name with the
         * <code>CreateCluster</code> action.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon ECS cluster. By default, your account receives a
         * <code>default</code> cluster when you launch your first container instance.
         * However, you can create your own cluster with a unique name with the
         * <code>CreateCluster</code> action.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs and maintains a desired number of tasks from a specified task
         * definition. If the number of tasks running in a service drops below
         * <code>desiredCount</code>, Amazon ECS spawns another copy of the task in the
         * specified cluster. To update an existing service, see <a>UpdateService</a>.</p>
         * <p>In addition to maintaining the desired count of tasks in your service, you
         * can optionally run your service behind a load balancer. The load balancer
         * distributes traffic across the tasks that are associated with the service. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-load-balancing.html">Service
         * Load Balancing</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can optionally specify a deployment configuration for your
         * service. During a deployment (which is triggered by changing the task definition
         * or the desired count of a service with an <a>UpdateService</a> operation), the
         * service scheduler uses the <code>minimumHealthyPercent</code> and
         * <code>maximumPercent</code> parameters to determine the deployment strategy.</p>
         * <p>The <code>minimumHealthyPercent</code> represents a lower limit on the number
         * of your service's tasks that must remain in the <code>RUNNING</code> state
         * during a deployment, as a percentage of the <code>desiredCount</code> (rounded
         * up to the nearest integer). This parameter enables you to deploy without using
         * additional cluster capacity. For example, if your service has a
         * <code>desiredCount</code> of four tasks and a <code>minimumHealthyPercent</code>
         * of 50%, the scheduler may stop two existing tasks to free up cluster capacity
         * before starting two new tasks. Tasks for services that <i>do not</i> use a load
         * balancer are considered healthy if they are in the <code>RUNNING</code> state;
         * tasks for services that <i>do</i> use a load balancer are considered healthy if
         * they are in the <code>RUNNING</code> state and the container instance it is
         * hosted on is reported as healthy by the load balancer. The default value for
         * <code>minimumHealthyPercent</code> is 50% in the console and 100% for the AWS
         * CLI, the AWS SDKs, and the APIs.</p> <p>The <code>maximumPercent</code>
         * parameter represents an upper limit on the number of your service's tasks that
         * are allowed in the <code>RUNNING</code> or <code>PENDING</code> state during a
         * deployment, as a percentage of the <code>desiredCount</code> (rounded down to
         * the nearest integer). This parameter enables you to define the deployment batch
         * size. For example, if your service has a <code>desiredCount</code> of four tasks
         * and a <code>maximumPercent</code> value of 200%, the scheduler may start four
         * new tasks before stopping the four older tasks (provided that the cluster
         * resources required to do this are available). The default value for
         * <code>maximumPercent</code> is 200%.</p> <p>When the service scheduler launches
         * new tasks, it attempts to balance them across the Availability Zones in your
         * cluster with the following logic:</p> <ul> <li> <p>Determine which of the
         * container instances in your cluster can support your service's task definition
         * (for example, they have the required CPU, memory, ports, and container instance
         * attributes).</p> </li> <li> <p>Sort the valid container instances by the fewest
         * number of running tasks for this service in the same Availability Zone as the
         * instance. For example, if zone A has one running service task and zones B and C
         * each have zero, valid container instances in either zone B or C are considered
         * optimal for placement.</p> </li> <li> <p>Place the new service task on a valid
         * container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the fewest number of running tasks for
         * this service.</p> </li> </ul>
         */
        virtual Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

        /**
         * <p>Runs and maintains a desired number of tasks from a specified task
         * definition. If the number of tasks running in a service drops below
         * <code>desiredCount</code>, Amazon ECS spawns another copy of the task in the
         * specified cluster. To update an existing service, see <a>UpdateService</a>.</p>
         * <p>In addition to maintaining the desired count of tasks in your service, you
         * can optionally run your service behind a load balancer. The load balancer
         * distributes traffic across the tasks that are associated with the service. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-load-balancing.html">Service
         * Load Balancing</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can optionally specify a deployment configuration for your
         * service. During a deployment (which is triggered by changing the task definition
         * or the desired count of a service with an <a>UpdateService</a> operation), the
         * service scheduler uses the <code>minimumHealthyPercent</code> and
         * <code>maximumPercent</code> parameters to determine the deployment strategy.</p>
         * <p>The <code>minimumHealthyPercent</code> represents a lower limit on the number
         * of your service's tasks that must remain in the <code>RUNNING</code> state
         * during a deployment, as a percentage of the <code>desiredCount</code> (rounded
         * up to the nearest integer). This parameter enables you to deploy without using
         * additional cluster capacity. For example, if your service has a
         * <code>desiredCount</code> of four tasks and a <code>minimumHealthyPercent</code>
         * of 50%, the scheduler may stop two existing tasks to free up cluster capacity
         * before starting two new tasks. Tasks for services that <i>do not</i> use a load
         * balancer are considered healthy if they are in the <code>RUNNING</code> state;
         * tasks for services that <i>do</i> use a load balancer are considered healthy if
         * they are in the <code>RUNNING</code> state and the container instance it is
         * hosted on is reported as healthy by the load balancer. The default value for
         * <code>minimumHealthyPercent</code> is 50% in the console and 100% for the AWS
         * CLI, the AWS SDKs, and the APIs.</p> <p>The <code>maximumPercent</code>
         * parameter represents an upper limit on the number of your service's tasks that
         * are allowed in the <code>RUNNING</code> or <code>PENDING</code> state during a
         * deployment, as a percentage of the <code>desiredCount</code> (rounded down to
         * the nearest integer). This parameter enables you to define the deployment batch
         * size. For example, if your service has a <code>desiredCount</code> of four tasks
         * and a <code>maximumPercent</code> value of 200%, the scheduler may start four
         * new tasks before stopping the four older tasks (provided that the cluster
         * resources required to do this are available). The default value for
         * <code>maximumPercent</code> is 200%.</p> <p>When the service scheduler launches
         * new tasks, it attempts to balance them across the Availability Zones in your
         * cluster with the following logic:</p> <ul> <li> <p>Determine which of the
         * container instances in your cluster can support your service's task definition
         * (for example, they have the required CPU, memory, ports, and container instance
         * attributes).</p> </li> <li> <p>Sort the valid container instances by the fewest
         * number of running tasks for this service in the same Availability Zone as the
         * instance. For example, if zone A has one running service task and zones B and C
         * each have zero, valid container instances in either zone B or C are considered
         * optimal for placement.</p> </li> <li> <p>Place the new service task on a valid
         * container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the fewest number of running tasks for
         * this service.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request) const;

        /**
         * <p>Runs and maintains a desired number of tasks from a specified task
         * definition. If the number of tasks running in a service drops below
         * <code>desiredCount</code>, Amazon ECS spawns another copy of the task in the
         * specified cluster. To update an existing service, see <a>UpdateService</a>.</p>
         * <p>In addition to maintaining the desired count of tasks in your service, you
         * can optionally run your service behind a load balancer. The load balancer
         * distributes traffic across the tasks that are associated with the service. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-load-balancing.html">Service
         * Load Balancing</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can optionally specify a deployment configuration for your
         * service. During a deployment (which is triggered by changing the task definition
         * or the desired count of a service with an <a>UpdateService</a> operation), the
         * service scheduler uses the <code>minimumHealthyPercent</code> and
         * <code>maximumPercent</code> parameters to determine the deployment strategy.</p>
         * <p>The <code>minimumHealthyPercent</code> represents a lower limit on the number
         * of your service's tasks that must remain in the <code>RUNNING</code> state
         * during a deployment, as a percentage of the <code>desiredCount</code> (rounded
         * up to the nearest integer). This parameter enables you to deploy without using
         * additional cluster capacity. For example, if your service has a
         * <code>desiredCount</code> of four tasks and a <code>minimumHealthyPercent</code>
         * of 50%, the scheduler may stop two existing tasks to free up cluster capacity
         * before starting two new tasks. Tasks for services that <i>do not</i> use a load
         * balancer are considered healthy if they are in the <code>RUNNING</code> state;
         * tasks for services that <i>do</i> use a load balancer are considered healthy if
         * they are in the <code>RUNNING</code> state and the container instance it is
         * hosted on is reported as healthy by the load balancer. The default value for
         * <code>minimumHealthyPercent</code> is 50% in the console and 100% for the AWS
         * CLI, the AWS SDKs, and the APIs.</p> <p>The <code>maximumPercent</code>
         * parameter represents an upper limit on the number of your service's tasks that
         * are allowed in the <code>RUNNING</code> or <code>PENDING</code> state during a
         * deployment, as a percentage of the <code>desiredCount</code> (rounded down to
         * the nearest integer). This parameter enables you to define the deployment batch
         * size. For example, if your service has a <code>desiredCount</code> of four tasks
         * and a <code>maximumPercent</code> value of 200%, the scheduler may start four
         * new tasks before stopping the four older tasks (provided that the cluster
         * resources required to do this are available). The default value for
         * <code>maximumPercent</code> is 200%.</p> <p>When the service scheduler launches
         * new tasks, it attempts to balance them across the Availability Zones in your
         * cluster with the following logic:</p> <ul> <li> <p>Determine which of the
         * container instances in your cluster can support your service's task definition
         * (for example, they have the required CPU, memory, ports, and container instance
         * attributes).</p> </li> <li> <p>Sort the valid container instances by the fewest
         * number of running tasks for this service in the same Availability Zone as the
         * instance. For example, if zone A has one running service task and zones B and C
         * each have zero, valid container instances in either zone B or C are considered
         * optimal for placement.</p> </li> <li> <p>Place the new service task on a valid
         * container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the fewest number of running tasks for
         * this service.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified cluster. You must deregister all container instances
         * from this cluster before you may delete it. You can list the container instances
         * in a cluster with <a>ListContainerInstances</a> and deregister them with
         * <a>DeregisterContainerInstance</a>.</p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the specified cluster. You must deregister all container instances
         * from this cluster before you may delete it. You can list the container instances
         * in a cluster with <a>ListContainerInstances</a> and deregister them with
         * <a>DeregisterContainerInstance</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the specified cluster. You must deregister all container instances
         * from this cluster before you may delete it. You can list the container instances
         * in a cluster with <a>ListContainerInstances</a> and deregister them with
         * <a>DeregisterContainerInstance</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified service within a cluster. You can delete a service if you
         * have no running tasks in it and the desired task count is zero. If the service
         * is actively maintaining tasks, you cannot delete it, and you must update the
         * service to a desired task count of zero. For more information, see
         * <a>UpdateService</a>.</p> <note> <p>When you delete a service, if there are
         * still running tasks that require cleanup, the service status moves from
         * <code>ACTIVE</code> to <code>DRAINING</code>, and the service is no longer
         * visible in the console or in <a>ListServices</a> API operations. After the tasks
         * have stopped, then the service status moves from <code>DRAINING</code> to
         * <code>INACTIVE</code>. Services in the <code>DRAINING</code> or
         * <code>INACTIVE</code> status can still be viewed with <a>DescribeServices</a>
         * API operations; however, in the future, <code>INACTIVE</code> services may be
         * cleaned up and purged from Amazon ECS record keeping, and
         * <a>DescribeServices</a> API operations on those services will return a
         * <code>ServiceNotFoundException</code> error.</p> </note>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

        /**
         * <p>Deletes a specified service within a cluster. You can delete a service if you
         * have no running tasks in it and the desired task count is zero. If the service
         * is actively maintaining tasks, you cannot delete it, and you must update the
         * service to a desired task count of zero. For more information, see
         * <a>UpdateService</a>.</p> <note> <p>When you delete a service, if there are
         * still running tasks that require cleanup, the service status moves from
         * <code>ACTIVE</code> to <code>DRAINING</code>, and the service is no longer
         * visible in the console or in <a>ListServices</a> API operations. After the tasks
         * have stopped, then the service status moves from <code>DRAINING</code> to
         * <code>INACTIVE</code>. Services in the <code>DRAINING</code> or
         * <code>INACTIVE</code> status can still be viewed with <a>DescribeServices</a>
         * API operations; however, in the future, <code>INACTIVE</code> services may be
         * cleaned up and purged from Amazon ECS record keeping, and
         * <a>DescribeServices</a> API operations on those services will return a
         * <code>ServiceNotFoundException</code> error.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request) const;

        /**
         * <p>Deletes a specified service within a cluster. You can delete a service if you
         * have no running tasks in it and the desired task count is zero. If the service
         * is actively maintaining tasks, you cannot delete it, and you must update the
         * service to a desired task count of zero. For more information, see
         * <a>UpdateService</a>.</p> <note> <p>When you delete a service, if there are
         * still running tasks that require cleanup, the service status moves from
         * <code>ACTIVE</code> to <code>DRAINING</code>, and the service is no longer
         * visible in the console or in <a>ListServices</a> API operations. After the tasks
         * have stopped, then the service status moves from <code>DRAINING</code> to
         * <code>INACTIVE</code>. Services in the <code>DRAINING</code> or
         * <code>INACTIVE</code> status can still be viewed with <a>DescribeServices</a>
         * API operations; however, in the future, <code>INACTIVE</code> services may be
         * cleaned up and purged from Amazon ECS record keeping, and
         * <a>DescribeServices</a> API operations on those services will return a
         * <code>ServiceNotFoundException</code> error.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an Amazon ECS container instance from the specified cluster. This
         * instance is no longer available to run tasks.</p> <p>If you intend to use the
         * container instance for some other purpose after deregistration, you should stop
         * all of the tasks running on the container instance before deregistration to
         * avoid any orphaned tasks from consuming resources.</p> <p>Deregistering a
         * container instance removes the instance from a cluster, but it does not
         * terminate the EC2 instance; if you are finished using the instance, be sure to
         * terminate it in the Amazon EC2 console to stop billing.</p> <note> <p>If you
         * terminate a running container instance, Amazon ECS automatically deregisters the
         * instance from your cluster (stopped container instances or instances with
         * disconnected agents are not automatically deregistered when terminated).</p>
         * </note>
         */
        virtual Model::DeregisterContainerInstanceOutcome DeregisterContainerInstance(const Model::DeregisterContainerInstanceRequest& request) const;

        /**
         * <p>Deregisters an Amazon ECS container instance from the specified cluster. This
         * instance is no longer available to run tasks.</p> <p>If you intend to use the
         * container instance for some other purpose after deregistration, you should stop
         * all of the tasks running on the container instance before deregistration to
         * avoid any orphaned tasks from consuming resources.</p> <p>Deregistering a
         * container instance removes the instance from a cluster, but it does not
         * terminate the EC2 instance; if you are finished using the instance, be sure to
         * terminate it in the Amazon EC2 console to stop billing.</p> <note> <p>If you
         * terminate a running container instance, Amazon ECS automatically deregisters the
         * instance from your cluster (stopped container instances or instances with
         * disconnected agents are not automatically deregistered when terminated).</p>
         * </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterContainerInstanceOutcomeCallable DeregisterContainerInstanceCallable(const Model::DeregisterContainerInstanceRequest& request) const;

        /**
         * <p>Deregisters an Amazon ECS container instance from the specified cluster. This
         * instance is no longer available to run tasks.</p> <p>If you intend to use the
         * container instance for some other purpose after deregistration, you should stop
         * all of the tasks running on the container instance before deregistration to
         * avoid any orphaned tasks from consuming resources.</p> <p>Deregistering a
         * container instance removes the instance from a cluster, but it does not
         * terminate the EC2 instance; if you are finished using the instance, be sure to
         * terminate it in the Amazon EC2 console to stop billing.</p> <note> <p>If you
         * terminate a running container instance, Amazon ECS automatically deregisters the
         * instance from your cluster (stopped container instances or instances with
         * disconnected agents are not automatically deregistered when terminated).</p>
         * </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterContainerInstanceAsync(const Model::DeregisterContainerInstanceRequest& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified task definition by family and revision. Upon
         * deregistration, the task definition is marked as <code>INACTIVE</code>. Existing
         * tasks and services that reference an <code>INACTIVE</code> task definition
         * continue to run without disruption. Existing services that reference an
         * <code>INACTIVE</code> task definition can still scale up or down by modifying
         * the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task
         * definition to run new tasks or create new services, and you cannot update an
         * existing service to reference an <code>INACTIVE</code> task definition (although
         * there may be up to a 10 minute window following deregistration where these
         * restrictions have not yet taken effect).</p>
         */
        virtual Model::DeregisterTaskDefinitionOutcome DeregisterTaskDefinition(const Model::DeregisterTaskDefinitionRequest& request) const;

        /**
         * <p>Deregisters the specified task definition by family and revision. Upon
         * deregistration, the task definition is marked as <code>INACTIVE</code>. Existing
         * tasks and services that reference an <code>INACTIVE</code> task definition
         * continue to run without disruption. Existing services that reference an
         * <code>INACTIVE</code> task definition can still scale up or down by modifying
         * the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task
         * definition to run new tasks or create new services, and you cannot update an
         * existing service to reference an <code>INACTIVE</code> task definition (although
         * there may be up to a 10 minute window following deregistration where these
         * restrictions have not yet taken effect).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTaskDefinitionOutcomeCallable DeregisterTaskDefinitionCallable(const Model::DeregisterTaskDefinitionRequest& request) const;

        /**
         * <p>Deregisters the specified task definition by family and revision. Upon
         * deregistration, the task definition is marked as <code>INACTIVE</code>. Existing
         * tasks and services that reference an <code>INACTIVE</code> task definition
         * continue to run without disruption. Existing services that reference an
         * <code>INACTIVE</code> task definition can still scale up or down by modifying
         * the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task
         * definition to run new tasks or create new services, and you cannot update an
         * existing service to reference an <code>INACTIVE</code> task definition (although
         * there may be up to a 10 minute window following deregistration where these
         * restrictions have not yet taken effect).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTaskDefinitionAsync(const Model::DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your clusters.</p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

        /**
         * <p>Describes one or more of your clusters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

        /**
         * <p>Describes one or more of your clusters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Amazon EC2 Container Service container instances. Returns metadata
         * about registered and remaining resources on each container instance
         * requested.</p>
         */
        virtual Model::DescribeContainerInstancesOutcome DescribeContainerInstances(const Model::DescribeContainerInstancesRequest& request) const;

        /**
         * <p>Describes Amazon EC2 Container Service container instances. Returns metadata
         * about registered and remaining resources on each container instance
         * requested.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContainerInstancesOutcomeCallable DescribeContainerInstancesCallable(const Model::DescribeContainerInstancesRequest& request) const;

        /**
         * <p>Describes Amazon EC2 Container Service container instances. Returns metadata
         * about registered and remaining resources on each container instance
         * requested.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContainerInstancesAsync(const Model::DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified services running in your cluster.</p>
         */
        virtual Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;

        /**
         * <p>Describes the specified services running in your cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request) const;

        /**
         * <p>Describes the specified services running in your cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServicesAsync(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a task definition. You can specify a <code>family</code> and
         * <code>revision</code> to find information about a specific task definition, or
         * you can simply specify the family to find the latest <code>ACTIVE</code>
         * revision in that family.</p> <note> <p>You can only describe
         * <code>INACTIVE</code> task definitions while an active task or service
         * references them.</p> </note>
         */
        virtual Model::DescribeTaskDefinitionOutcome DescribeTaskDefinition(const Model::DescribeTaskDefinitionRequest& request) const;

        /**
         * <p>Describes a task definition. You can specify a <code>family</code> and
         * <code>revision</code> to find information about a specific task definition, or
         * you can simply specify the family to find the latest <code>ACTIVE</code>
         * revision in that family.</p> <note> <p>You can only describe
         * <code>INACTIVE</code> task definitions while an active task or service
         * references them.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTaskDefinitionOutcomeCallable DescribeTaskDefinitionCallable(const Model::DescribeTaskDefinitionRequest& request) const;

        /**
         * <p>Describes a task definition. You can specify a <code>family</code> and
         * <code>revision</code> to find information about a specific task definition, or
         * you can simply specify the family to find the latest <code>ACTIVE</code>
         * revision in that family.</p> <note> <p>You can only describe
         * <code>INACTIVE</code> task definitions while an active task or service
         * references them.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTaskDefinitionAsync(const Model::DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a specified task or tasks.</p>
         */
        virtual Model::DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest& request) const;

        /**
         * <p>Describes a specified task or tasks.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request) const;

        /**
         * <p>Describes a specified task or tasks.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Returns an
         * endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>
         */
        virtual Model::DiscoverPollEndpointOutcome DiscoverPollEndpoint(const Model::DiscoverPollEndpointRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Returns an
         * endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DiscoverPollEndpointOutcomeCallable DiscoverPollEndpointCallable(const Model::DiscoverPollEndpointRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Returns an
         * endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DiscoverPollEndpointAsync(const Model::DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing clusters.</p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * <p>Returns a list of existing clusters.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * <p>Returns a list of existing clusters.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of container instances in a specified cluster.</p>
         */
        virtual Model::ListContainerInstancesOutcome ListContainerInstances(const Model::ListContainerInstancesRequest& request) const;

        /**
         * <p>Returns a list of container instances in a specified cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContainerInstancesOutcomeCallable ListContainerInstancesCallable(const Model::ListContainerInstancesRequest& request) const;

        /**
         * <p>Returns a list of container instances in a specified cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContainerInstancesAsync(const Model::ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the services that are running in a specified cluster.</p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * <p>Lists the services that are running in a specified cluster.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /**
         * <p>Lists the services that are running in a specified cluster.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServicesAsync(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of task definition families that are registered to your
         * account (which may include task definition families that no longer have any
         * <code>ACTIVE</code> task definition revisions).</p> <p>You can filter out task
         * definition families that do not contain any <code>ACTIVE</code> task definition
         * revisions by setting the <code>status</code> parameter to <code>ACTIVE</code>.
         * You can also filter the results with the <code>familyPrefix</code>
         * parameter.</p>
         */
        virtual Model::ListTaskDefinitionFamiliesOutcome ListTaskDefinitionFamilies(const Model::ListTaskDefinitionFamiliesRequest& request) const;

        /**
         * <p>Returns a list of task definition families that are registered to your
         * account (which may include task definition families that no longer have any
         * <code>ACTIVE</code> task definition revisions).</p> <p>You can filter out task
         * definition families that do not contain any <code>ACTIVE</code> task definition
         * revisions by setting the <code>status</code> parameter to <code>ACTIVE</code>.
         * You can also filter the results with the <code>familyPrefix</code>
         * parameter.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTaskDefinitionFamiliesOutcomeCallable ListTaskDefinitionFamiliesCallable(const Model::ListTaskDefinitionFamiliesRequest& request) const;

        /**
         * <p>Returns a list of task definition families that are registered to your
         * account (which may include task definition families that no longer have any
         * <code>ACTIVE</code> task definition revisions).</p> <p>You can filter out task
         * definition families that do not contain any <code>ACTIVE</code> task definition
         * revisions by setting the <code>status</code> parameter to <code>ACTIVE</code>.
         * You can also filter the results with the <code>familyPrefix</code>
         * parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTaskDefinitionFamiliesAsync(const Model::ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of task definitions that are registered to your account. You
         * can filter the results by family name with the <code>familyPrefix</code>
         * parameter or by status with the <code>status</code> parameter.</p>
         */
        virtual Model::ListTaskDefinitionsOutcome ListTaskDefinitions(const Model::ListTaskDefinitionsRequest& request) const;

        /**
         * <p>Returns a list of task definitions that are registered to your account. You
         * can filter the results by family name with the <code>familyPrefix</code>
         * parameter or by status with the <code>status</code> parameter.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTaskDefinitionsOutcomeCallable ListTaskDefinitionsCallable(const Model::ListTaskDefinitionsRequest& request) const;

        /**
         * <p>Returns a list of task definitions that are registered to your account. You
         * can filter the results by family name with the <code>familyPrefix</code>
         * parameter or by status with the <code>status</code> parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTaskDefinitionsAsync(const Model::ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tasks for a specified cluster. You can filter the results
         * by family name, by a particular container instance, or by the desired status of
         * the task with the <code>family</code>, <code>containerInstance</code>, and
         * <code>desiredStatus</code> parameters.</p> <p>Recently-stopped tasks might
         * appear in the returned results. Currently, stopped tasks appear in the returned
         * results for at least one hour. </p>
         */
        virtual Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

        /**
         * <p>Returns a list of tasks for a specified cluster. You can filter the results
         * by family name, by a particular container instance, or by the desired status of
         * the task with the <code>family</code>, <code>containerInstance</code>, and
         * <code>desiredStatus</code> parameters.</p> <p>Recently-stopped tasks might
         * appear in the returned results. Currently, stopped tasks appear in the returned
         * results for at least one hour. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request) const;

        /**
         * <p>Returns a list of tasks for a specified cluster. You can filter the results
         * by family name, by a particular container instance, or by the desired status of
         * the task with the <code>family</code>, <code>containerInstance</code>, and
         * <code>desiredStatus</code> parameters.</p> <p>Recently-stopped tasks might
         * appear in the returned results. Currently, stopped tasks appear in the returned
         * results for at least one hour. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Registers an
         * EC2 instance into the specified cluster. This instance becomes available to
         * place containers on.</p>
         */
        virtual Model::RegisterContainerInstanceOutcome RegisterContainerInstance(const Model::RegisterContainerInstanceRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Registers an
         * EC2 instance into the specified cluster. This instance becomes available to
         * place containers on.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterContainerInstanceOutcomeCallable RegisterContainerInstanceCallable(const Model::RegisterContainerInstanceRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Registers an
         * EC2 instance into the specified cluster. This instance becomes available to
         * place containers on.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterContainerInstanceAsync(const Model::RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a new task definition from the supplied <code>family</code> and
         * <code>containerDefinitions</code>. Optionally, you can add data volumes to your
         * containers with the <code>volumes</code> parameter. For more information about
         * task definition parameters and defaults, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
         * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can specify an IAM role for your task with the
         * <code>taskRoleArn</code> parameter. When you specify an IAM role for a task, its
         * containers can then use the latest versions of the AWS CLI or SDKs to make API
         * requests to the AWS services that are specified in the IAM policy associated
         * with the role. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
         * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can specify a Docker networking mode for the containers in
         * your task definition with the <code>networkMode</code> parameter. The available
         * network modes correspond to those described in <a
         * href="https://docs.docker.com/engine/reference/run/#/network-settings">Network
         * settings</a> in the Docker run reference.</p>
         */
        virtual Model::RegisterTaskDefinitionOutcome RegisterTaskDefinition(const Model::RegisterTaskDefinitionRequest& request) const;

        /**
         * <p>Registers a new task definition from the supplied <code>family</code> and
         * <code>containerDefinitions</code>. Optionally, you can add data volumes to your
         * containers with the <code>volumes</code> parameter. For more information about
         * task definition parameters and defaults, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
         * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can specify an IAM role for your task with the
         * <code>taskRoleArn</code> parameter. When you specify an IAM role for a task, its
         * containers can then use the latest versions of the AWS CLI or SDKs to make API
         * requests to the AWS services that are specified in the IAM policy associated
         * with the role. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
         * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can specify a Docker networking mode for the containers in
         * your task definition with the <code>networkMode</code> parameter. The available
         * network modes correspond to those described in <a
         * href="https://docs.docker.com/engine/reference/run/#/network-settings">Network
         * settings</a> in the Docker run reference.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTaskDefinitionOutcomeCallable RegisterTaskDefinitionCallable(const Model::RegisterTaskDefinitionRequest& request) const;

        /**
         * <p>Registers a new task definition from the supplied <code>family</code> and
         * <code>containerDefinitions</code>. Optionally, you can add data volumes to your
         * containers with the <code>volumes</code> parameter. For more information about
         * task definition parameters and defaults, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
         * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can specify an IAM role for your task with the
         * <code>taskRoleArn</code> parameter. When you specify an IAM role for a task, its
         * containers can then use the latest versions of the AWS CLI or SDKs to make API
         * requests to the AWS services that are specified in the IAM policy associated
         * with the role. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
         * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p> <p>You can specify a Docker networking mode for the containers in
         * your task definition with the <code>networkMode</code> parameter. The available
         * network modes correspond to those described in <a
         * href="https://docs.docker.com/engine/reference/run/#/network-settings">Network
         * settings</a> in the Docker run reference.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTaskDefinitionAsync(const Model::RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Start a task using random placement and the default Amazon ECS scheduler. To
         * use your own scheduler or place a task on a specific container instance, use
         * <code>StartTask</code> instead.</p> <important> <p>The <code>count</code>
         * parameter is limited to 10 tasks per call.</p> </important>
         */
        virtual Model::RunTaskOutcome RunTask(const Model::RunTaskRequest& request) const;

        /**
         * <p>Start a task using random placement and the default Amazon ECS scheduler. To
         * use your own scheduler or place a task on a specific container instance, use
         * <code>StartTask</code> instead.</p> <important> <p>The <code>count</code>
         * parameter is limited to 10 tasks per call.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunTaskOutcomeCallable RunTaskCallable(const Model::RunTaskRequest& request) const;

        /**
         * <p>Start a task using random placement and the default Amazon ECS scheduler. To
         * use your own scheduler or place a task on a specific container instance, use
         * <code>StartTask</code> instead.</p> <important> <p>The <code>count</code>
         * parameter is limited to 10 tasks per call.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunTaskAsync(const Model::RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new task from the specified task definition on the specified
         * container instance or instances. To use the default Amazon ECS scheduler to
         * place your task, use <code>RunTask</code> instead.</p> <important> <p>The list
         * of container instances to start tasks on is limited to 10.</p> </important>
         */
        virtual Model::StartTaskOutcome StartTask(const Model::StartTaskRequest& request) const;

        /**
         * <p>Starts a new task from the specified task definition on the specified
         * container instance or instances. To use the default Amazon ECS scheduler to
         * place your task, use <code>RunTask</code> instead.</p> <important> <p>The list
         * of container instances to start tasks on is limited to 10.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTaskOutcomeCallable StartTaskCallable(const Model::StartTaskRequest& request) const;

        /**
         * <p>Starts a new task from the specified task definition on the specified
         * container instance or instances. To use the default Amazon ECS scheduler to
         * place your task, use <code>RunTask</code> instead.</p> <important> <p>The list
         * of container instances to start tasks on is limited to 10.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTaskAsync(const Model::StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running task.</p> <p>When <a>StopTask</a> is called on a task, the
         * equivalent of <code>docker stop</code> is issued to the containers running in
         * the task. This results in a <code>SIGTERM</code> and a 30-second timeout, after
         * which <code>SIGKILL</code> is sent and the containers are forcibly stopped. If
         * the container handles the <code>SIGTERM</code> gracefully and exits within 30
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p>
         */
        virtual Model::StopTaskOutcome StopTask(const Model::StopTaskRequest& request) const;

        /**
         * <p>Stops a running task.</p> <p>When <a>StopTask</a> is called on a task, the
         * equivalent of <code>docker stop</code> is issued to the containers running in
         * the task. This results in a <code>SIGTERM</code> and a 30-second timeout, after
         * which <code>SIGKILL</code> is sent and the containers are forcibly stopped. If
         * the container handles the <code>SIGTERM</code> gracefully and exits within 30
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTaskOutcomeCallable StopTaskCallable(const Model::StopTaskRequest& request) const;

        /**
         * <p>Stops a running task.</p> <p>When <a>StopTask</a> is called on a task, the
         * equivalent of <code>docker stop</code> is issued to the containers running in
         * the task. This results in a <code>SIGTERM</code> and a 30-second timeout, after
         * which <code>SIGKILL</code> is sent and the containers are forcibly stopped. If
         * the container handles the <code>SIGTERM</code> gracefully and exits within 30
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTaskAsync(const Model::StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a container changed states.</p>
         */
        virtual Model::SubmitContainerStateChangeOutcome SubmitContainerStateChange(const Model::SubmitContainerStateChangeRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a container changed states.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitContainerStateChangeOutcomeCallable SubmitContainerStateChangeCallable(const Model::SubmitContainerStateChangeRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a container changed states.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubmitContainerStateChangeAsync(const Model::SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a task changed states.</p>
         */
        virtual Model::SubmitTaskStateChangeOutcome SubmitTaskStateChange(const Model::SubmitTaskStateChangeRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a task changed states.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitTaskStateChangeOutcomeCallable SubmitTaskStateChangeCallable(const Model::SubmitTaskStateChangeRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a task changed states.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubmitTaskStateChangeAsync(const Model::SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Amazon ECS container agent on a specified container instance.
         * Updating the Amazon ECS container agent does not interrupt running tasks or
         * services on the container instance. The process for updating the agent differs
         * depending on whether your container instance was launched with the Amazon
         * ECS-optimized AMI or another operating system.</p> <p>
         * <code>UpdateContainerAgent</code> requires the Amazon ECS-optimized AMI or
         * Amazon Linux with the <code>ecs-init</code> service installed and running. For
         * help updating the Amazon ECS container agent on other operating systems, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html#manually_update_agent">Manually
         * Updating the Amazon ECS Container Agent</a> in the <i>Amazon EC2 Container
         * Service Developer Guide</i>.</p>
         */
        virtual Model::UpdateContainerAgentOutcome UpdateContainerAgent(const Model::UpdateContainerAgentRequest& request) const;

        /**
         * <p>Updates the Amazon ECS container agent on a specified container instance.
         * Updating the Amazon ECS container agent does not interrupt running tasks or
         * services on the container instance. The process for updating the agent differs
         * depending on whether your container instance was launched with the Amazon
         * ECS-optimized AMI or another operating system.</p> <p>
         * <code>UpdateContainerAgent</code> requires the Amazon ECS-optimized AMI or
         * Amazon Linux with the <code>ecs-init</code> service installed and running. For
         * help updating the Amazon ECS container agent on other operating systems, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html#manually_update_agent">Manually
         * Updating the Amazon ECS Container Agent</a> in the <i>Amazon EC2 Container
         * Service Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContainerAgentOutcomeCallable UpdateContainerAgentCallable(const Model::UpdateContainerAgentRequest& request) const;

        /**
         * <p>Updates the Amazon ECS container agent on a specified container instance.
         * Updating the Amazon ECS container agent does not interrupt running tasks or
         * services on the container instance. The process for updating the agent differs
         * depending on whether your container instance was launched with the Amazon
         * ECS-optimized AMI or another operating system.</p> <p>
         * <code>UpdateContainerAgent</code> requires the Amazon ECS-optimized AMI or
         * Amazon Linux with the <code>ecs-init</code> service installed and running. For
         * help updating the Amazon ECS container agent on other operating systems, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html#manually_update_agent">Manually
         * Updating the Amazon ECS Container Agent</a> in the <i>Amazon EC2 Container
         * Service Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContainerAgentAsync(const Model::UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the desired count, deployment configuration, or task definition used
         * in a service.</p> <p>You can add to or subtract from the number of
         * instantiations of a task definition in a service by specifying the cluster that
         * the service is running in and a new <code>desiredCount</code> parameter.</p>
         * <p>You can use <a>UpdateService</a> to modify your task definition and deploy a
         * new version of your service.</p> <p>You can also update the deployment
         * configuration of a service. When a deployment is triggered by updating the task
         * definition of a service, the service scheduler uses the deployment configuration
         * parameters, <code>minimumHealthyPercent</code> and <code>maximumPercent</code>,
         * to determine the deployment strategy.</p> <p>If the
         * <code>minimumHealthyPercent</code> is below 100%, the scheduler can ignore the
         * <code>desiredCount</code> temporarily during a deployment. For example, if your
         * service has a <code>desiredCount</code> of four tasks, a
         * <code>minimumHealthyPercent</code> of 50% allows the scheduler to stop two
         * existing tasks before starting two new tasks. Tasks for services that <i>do
         * not</i> use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state; tasks for services that <i>do</i> use a load
         * balancer are considered healthy if they are in the <code>RUNNING</code> state
         * and the container instance it is hosted on is reported as healthy by the load
         * balancer.</p> <p>The <code>maximumPercent</code> parameter represents an upper
         * limit on the number of running tasks during a deployment, which enables you to
         * define the deployment batch size. For example, if your service has a
         * <code>desiredCount</code> of four tasks, a <code>maximumPercent</code> value of
         * 200% starts four new tasks before stopping the four older tasks (provided that
         * the cluster resources required to do this are available).</p> <p>When
         * <a>UpdateService</a> stops a task during a deployment, the equivalent of
         * <code>docker stop</code> is issued to the containers running in the task. This
         * results in a <code>SIGTERM</code> and a 30-second timeout, after which
         * <code>SIGKILL</code> is sent and the containers are forcibly stopped. If the
         * container handles the <code>SIGTERM</code> gracefully and exits within 30
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p> <p>When the
         * service scheduler launches new tasks, it attempts to balance them across the
         * Availability Zones in your cluster with the following logic:</p> <ul> <li>
         * <p>Determine which of the container instances in your cluster can support your
         * service's task definition (for example, they have the required CPU, memory,
         * ports, and container instance attributes).</p> </li> <li> <p>Sort the valid
         * container instances by the fewest number of running tasks for this service in
         * the same Availability Zone as the instance. For example, if zone A has one
         * running service task and zones B and C each have zero, valid container instances
         * in either zone B or C are considered optimal for placement.</p> </li> <li>
         * <p>Place the new service task on a valid container instance in an optimal
         * Availability Zone (based on the previous steps), favoring container instances
         * with the fewest number of running tasks for this service.</p> </li> </ul>
         */
        virtual Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

        /**
         * <p>Modifies the desired count, deployment configuration, or task definition used
         * in a service.</p> <p>You can add to or subtract from the number of
         * instantiations of a task definition in a service by specifying the cluster that
         * the service is running in and a new <code>desiredCount</code> parameter.</p>
         * <p>You can use <a>UpdateService</a> to modify your task definition and deploy a
         * new version of your service.</p> <p>You can also update the deployment
         * configuration of a service. When a deployment is triggered by updating the task
         * definition of a service, the service scheduler uses the deployment configuration
         * parameters, <code>minimumHealthyPercent</code> and <code>maximumPercent</code>,
         * to determine the deployment strategy.</p> <p>If the
         * <code>minimumHealthyPercent</code> is below 100%, the scheduler can ignore the
         * <code>desiredCount</code> temporarily during a deployment. For example, if your
         * service has a <code>desiredCount</code> of four tasks, a
         * <code>minimumHealthyPercent</code> of 50% allows the scheduler to stop two
         * existing tasks before starting two new tasks. Tasks for services that <i>do
         * not</i> use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state; tasks for services that <i>do</i> use a load
         * balancer are considered healthy if they are in the <code>RUNNING</code> state
         * and the container instance it is hosted on is reported as healthy by the load
         * balancer.</p> <p>The <code>maximumPercent</code> parameter represents an upper
         * limit on the number of running tasks during a deployment, which enables you to
         * define the deployment batch size. For example, if your service has a
         * <code>desiredCount</code> of four tasks, a <code>maximumPercent</code> value of
         * 200% starts four new tasks before stopping the four older tasks (provided that
         * the cluster resources required to do this are available).</p> <p>When
         * <a>UpdateService</a> stops a task during a deployment, the equivalent of
         * <code>docker stop</code> is issued to the containers running in the task. This
         * results in a <code>SIGTERM</code> and a 30-second timeout, after which
         * <code>SIGKILL</code> is sent and the containers are forcibly stopped. If the
         * container handles the <code>SIGTERM</code> gracefully and exits within 30
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p> <p>When the
         * service scheduler launches new tasks, it attempts to balance them across the
         * Availability Zones in your cluster with the following logic:</p> <ul> <li>
         * <p>Determine which of the container instances in your cluster can support your
         * service's task definition (for example, they have the required CPU, memory,
         * ports, and container instance attributes).</p> </li> <li> <p>Sort the valid
         * container instances by the fewest number of running tasks for this service in
         * the same Availability Zone as the instance. For example, if zone A has one
         * running service task and zones B and C each have zero, valid container instances
         * in either zone B or C are considered optimal for placement.</p> </li> <li>
         * <p>Place the new service task on a valid container instance in an optimal
         * Availability Zone (based on the previous steps), favoring container instances
         * with the fewest number of running tasks for this service.</p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request) const;

        /**
         * <p>Modifies the desired count, deployment configuration, or task definition used
         * in a service.</p> <p>You can add to or subtract from the number of
         * instantiations of a task definition in a service by specifying the cluster that
         * the service is running in and a new <code>desiredCount</code> parameter.</p>
         * <p>You can use <a>UpdateService</a> to modify your task definition and deploy a
         * new version of your service.</p> <p>You can also update the deployment
         * configuration of a service. When a deployment is triggered by updating the task
         * definition of a service, the service scheduler uses the deployment configuration
         * parameters, <code>minimumHealthyPercent</code> and <code>maximumPercent</code>,
         * to determine the deployment strategy.</p> <p>If the
         * <code>minimumHealthyPercent</code> is below 100%, the scheduler can ignore the
         * <code>desiredCount</code> temporarily during a deployment. For example, if your
         * service has a <code>desiredCount</code> of four tasks, a
         * <code>minimumHealthyPercent</code> of 50% allows the scheduler to stop two
         * existing tasks before starting two new tasks. Tasks for services that <i>do
         * not</i> use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state; tasks for services that <i>do</i> use a load
         * balancer are considered healthy if they are in the <code>RUNNING</code> state
         * and the container instance it is hosted on is reported as healthy by the load
         * balancer.</p> <p>The <code>maximumPercent</code> parameter represents an upper
         * limit on the number of running tasks during a deployment, which enables you to
         * define the deployment batch size. For example, if your service has a
         * <code>desiredCount</code> of four tasks, a <code>maximumPercent</code> value of
         * 200% starts four new tasks before stopping the four older tasks (provided that
         * the cluster resources required to do this are available).</p> <p>When
         * <a>UpdateService</a> stops a task during a deployment, the equivalent of
         * <code>docker stop</code> is issued to the containers running in the task. This
         * results in a <code>SIGTERM</code> and a 30-second timeout, after which
         * <code>SIGKILL</code> is sent and the containers are forcibly stopped. If the
         * container handles the <code>SIGTERM</code> gracefully and exits within 30
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p> <p>When the
         * service scheduler launches new tasks, it attempts to balance them across the
         * Availability Zones in your cluster with the following logic:</p> <ul> <li>
         * <p>Determine which of the container instances in your cluster can support your
         * service's task definition (for example, they have the required CPU, memory,
         * ports, and container instance attributes).</p> </li> <li> <p>Sort the valid
         * container instances by the fewest number of running tasks for this service in
         * the same Availability Zone as the instance. For example, if zone A has one
         * running service task and zones B and C each have zero, valid container instances
         * in either zone B or C are considered optimal for placement.</p> </li> <li>
         * <p>Place the new service task on a valid container instance in an optimal
         * Availability Zone (based on the previous steps), favoring container instances
         * with the fewest number of running tasks for this service.</p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceAsyncHelper(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceAsyncHelper(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterContainerInstanceAsyncHelper(const Model::DeregisterContainerInstanceRequest& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterTaskDefinitionAsyncHelper(const Model::DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClustersAsyncHelper(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContainerInstancesAsyncHelper(const Model::DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServicesAsyncHelper(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTaskDefinitionAsyncHelper(const Model::DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTasksAsyncHelper(const Model::DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DiscoverPollEndpointAsyncHelper(const Model::DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContainerInstancesAsyncHelper(const Model::ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServicesAsyncHelper(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTaskDefinitionFamiliesAsyncHelper(const Model::ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTaskDefinitionsAsyncHelper(const Model::ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTasksAsyncHelper(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterContainerInstanceAsyncHelper(const Model::RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTaskDefinitionAsyncHelper(const Model::RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunTaskAsyncHelper(const Model::RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTaskAsyncHelper(const Model::StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTaskAsyncHelper(const Model::StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitContainerStateChangeAsyncHelper(const Model::SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitTaskStateChangeAsyncHelper(const Model::SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContainerAgentAsyncHelper(const Model::UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceAsyncHelper(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ECS
} // namespace Aws
