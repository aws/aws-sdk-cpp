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
#include <aws/ecs/model/DeleteAttributesResult.h>
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
#include <aws/ecs/model/ListAttributesResult.h>
#include <aws/ecs/model/ListClustersResult.h>
#include <aws/ecs/model/ListContainerInstancesResult.h>
#include <aws/ecs/model/ListServicesResult.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesResult.h>
#include <aws/ecs/model/ListTaskDefinitionsResult.h>
#include <aws/ecs/model/ListTasksResult.h>
#include <aws/ecs/model/PutAttributesResult.h>
#include <aws/ecs/model/RegisterContainerInstanceResult.h>
#include <aws/ecs/model/RegisterTaskDefinitionResult.h>
#include <aws/ecs/model/RunTaskResult.h>
#include <aws/ecs/model/StartTaskResult.h>
#include <aws/ecs/model/StopTaskResult.h>
#include <aws/ecs/model/SubmitContainerStateChangeResult.h>
#include <aws/ecs/model/SubmitTaskStateChangeResult.h>
#include <aws/ecs/model/UpdateContainerAgentResult.h>
#include <aws/ecs/model/UpdateContainerInstancesStateResult.h>
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
        class DeleteAttributesRequest;
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
        class ListAttributesRequest;
        class ListClustersRequest;
        class ListContainerInstancesRequest;
        class ListServicesRequest;
        class ListTaskDefinitionFamiliesRequest;
        class ListTaskDefinitionsRequest;
        class ListTasksRequest;
        class PutAttributesRequest;
        class RegisterContainerInstanceRequest;
        class RegisterTaskDefinitionRequest;
        class RunTaskRequest;
        class StartTaskRequest;
        class StopTaskRequest;
        class SubmitContainerStateChangeRequest;
        class SubmitTaskStateChangeRequest;
        class UpdateContainerAgentRequest;
        class UpdateContainerInstancesStateRequest;
        class UpdateServiceRequest;

        typedef Aws::Utils::Outcome<CreateClusterResult, Aws::Client::AWSError<ECSErrors>> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateServiceResult, Aws::Client::AWSError<ECSErrors>> CreateServiceOutcome;
        typedef Aws::Utils::Outcome<DeleteAttributesResult, Aws::Client::AWSError<ECSErrors>> DeleteAttributesOutcome;
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
        typedef Aws::Utils::Outcome<ListAttributesResult, Aws::Client::AWSError<ECSErrors>> ListAttributesOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, Aws::Client::AWSError<ECSErrors>> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListContainerInstancesResult, Aws::Client::AWSError<ECSErrors>> ListContainerInstancesOutcome;
        typedef Aws::Utils::Outcome<ListServicesResult, Aws::Client::AWSError<ECSErrors>> ListServicesOutcome;
        typedef Aws::Utils::Outcome<ListTaskDefinitionFamiliesResult, Aws::Client::AWSError<ECSErrors>> ListTaskDefinitionFamiliesOutcome;
        typedef Aws::Utils::Outcome<ListTaskDefinitionsResult, Aws::Client::AWSError<ECSErrors>> ListTaskDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListTasksResult, Aws::Client::AWSError<ECSErrors>> ListTasksOutcome;
        typedef Aws::Utils::Outcome<PutAttributesResult, Aws::Client::AWSError<ECSErrors>> PutAttributesOutcome;
        typedef Aws::Utils::Outcome<RegisterContainerInstanceResult, Aws::Client::AWSError<ECSErrors>> RegisterContainerInstanceOutcome;
        typedef Aws::Utils::Outcome<RegisterTaskDefinitionResult, Aws::Client::AWSError<ECSErrors>> RegisterTaskDefinitionOutcome;
        typedef Aws::Utils::Outcome<RunTaskResult, Aws::Client::AWSError<ECSErrors>> RunTaskOutcome;
        typedef Aws::Utils::Outcome<StartTaskResult, Aws::Client::AWSError<ECSErrors>> StartTaskOutcome;
        typedef Aws::Utils::Outcome<StopTaskResult, Aws::Client::AWSError<ECSErrors>> StopTaskOutcome;
        typedef Aws::Utils::Outcome<SubmitContainerStateChangeResult, Aws::Client::AWSError<ECSErrors>> SubmitContainerStateChangeOutcome;
        typedef Aws::Utils::Outcome<SubmitTaskStateChangeResult, Aws::Client::AWSError<ECSErrors>> SubmitTaskStateChangeOutcome;
        typedef Aws::Utils::Outcome<UpdateContainerAgentResult, Aws::Client::AWSError<ECSErrors>> UpdateContainerAgentOutcome;
        typedef Aws::Utils::Outcome<UpdateContainerInstancesStateResult, Aws::Client::AWSError<ECSErrors>> UpdateContainerInstancesStateOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceResult, Aws::Client::AWSError<ECSErrors>> UpdateServiceOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
        typedef std::future<DeleteAttributesOutcome> DeleteAttributesOutcomeCallable;
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
        typedef std::future<ListAttributesOutcome> ListAttributesOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListContainerInstancesOutcome> ListContainerInstancesOutcomeCallable;
        typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
        typedef std::future<ListTaskDefinitionFamiliesOutcome> ListTaskDefinitionFamiliesOutcomeCallable;
        typedef std::future<ListTaskDefinitionsOutcome> ListTaskDefinitionsOutcomeCallable;
        typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
        typedef std::future<PutAttributesOutcome> PutAttributesOutcomeCallable;
        typedef std::future<RegisterContainerInstanceOutcome> RegisterContainerInstanceOutcomeCallable;
        typedef std::future<RegisterTaskDefinitionOutcome> RegisterTaskDefinitionOutcomeCallable;
        typedef std::future<RunTaskOutcome> RunTaskOutcomeCallable;
        typedef std::future<StartTaskOutcome> StartTaskOutcomeCallable;
        typedef std::future<StopTaskOutcome> StopTaskOutcomeCallable;
        typedef std::future<SubmitContainerStateChangeOutcome> SubmitContainerStateChangeOutcomeCallable;
        typedef std::future<SubmitTaskStateChangeOutcome> SubmitTaskStateChangeOutcomeCallable;
        typedef std::future<UpdateContainerAgentOutcome> UpdateContainerAgentOutcomeCallable;
        typedef std::future<UpdateContainerInstancesStateOutcome> UpdateContainerInstancesStateOutcomeCallable;
        typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
} // namespace Model

  class ECSClient;

    typedef std::function<void(const ECSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteAttributesRequest&, const Model::DeleteAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttributesResponseReceivedHandler;
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
    typedef std::function<void(const ECSClient*, const Model::ListAttributesRequest&, const Model::ListAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttributesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListContainerInstancesRequest&, const Model::ListContainerInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContainerInstancesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTaskDefinitionFamiliesRequest&, const Model::ListTaskDefinitionFamiliesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskDefinitionFamiliesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTaskDefinitionsRequest&, const Model::ListTaskDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskDefinitionsResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::PutAttributesRequest&, const Model::PutAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAttributesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RegisterContainerInstanceRequest&, const Model::RegisterContainerInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterContainerInstanceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RegisterTaskDefinitionRequest&, const Model::RegisterTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RunTaskRequest&, const Model::RunTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::StartTaskRequest&, const Model::StartTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::StopTaskRequest&, const Model::StopTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitContainerStateChangeRequest&, const Model::SubmitContainerStateChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitContainerStateChangeResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitTaskStateChangeRequest&, const Model::SubmitTaskStateChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitTaskStateChangeResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateContainerAgentRequest&, const Model::UpdateContainerAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContainerAgentResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateContainerInstancesStateRequest&, const Model::UpdateContainerInstancesStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContainerInstancesStateResponseReceivedHandler;
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
         * <code>CreateCluster</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon ECS cluster. By default, your account receives a
         * <code>default</code> cluster when you launch your first container instance.
         * However, you can create your own cluster with a unique name with the
         * <code>CreateCluster</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new Amazon ECS cluster. By default, your account receives a
         * <code>default</code> cluster when you launch your first container instance.
         * However, you can create your own cluster with a unique name with the
         * <code>CreateCluster</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateCluster">AWS
         * API Reference</a></p>
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
         * additional cluster capacity. For example, if <code>desiredCount</code> is four
         * tasks and the minimum is 50%, the scheduler can stop two existing tasks to free
         * up cluster capacity before starting two new tasks. Tasks for services that do
         * not use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer. The default value is 50% in the console and 100% for the AWS CLI, the
         * AWS SDKs, and the APIs.</p> <p>The <code>maximumPercent</code> parameter
         * represents an upper limit on the number of your service's tasks that are allowed
         * in the <code>RUNNING</code> or <code>PENDING</code> state during a deployment,
         * as a percentage of the <code>desiredCount</code> (rounded down to the nearest
         * integer). This parameter enables you to define the deployment batch size. For
         * example, if <code>desiredCount</code> is four tasks and the maximum is 200%, the
         * scheduler can start four new tasks before stopping the four older tasks
         * (provided that the cluster resources required to do this are available). The
         * default value is 200%.</p> <p>When the service scheduler launches new tasks, it
         * determines task placement in your cluster using the following logic:</p> <ul>
         * <li> <p>Determine which of the container instances in your cluster can support
         * your service's task definition (for example, they have the required CPU, memory,
         * ports, and container instance attributes).</p> </li> <li> <p>By default, the
         * service scheduler attempts to balance tasks across Availability Zones in this
         * manner (although you can choose a different placement strategy):</p> <ul> <li>
         * <p>Sort the valid container instances by the fewest number of running tasks for
         * this service in the same Availability Zone as the instance. For example, if zone
         * A has one running service task and zones B and C each have zero, valid container
         * instances in either zone B or C are considered optimal for placement.</p> </li>
         * <li> <p>Place the new service task on a valid container instance in an optimal
         * Availability Zone (based on the previous steps), favoring container instances
         * with the fewest number of running tasks for this service.</p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateService">AWS
         * API Reference</a></p>
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
         * additional cluster capacity. For example, if <code>desiredCount</code> is four
         * tasks and the minimum is 50%, the scheduler can stop two existing tasks to free
         * up cluster capacity before starting two new tasks. Tasks for services that do
         * not use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer. The default value is 50% in the console and 100% for the AWS CLI, the
         * AWS SDKs, and the APIs.</p> <p>The <code>maximumPercent</code> parameter
         * represents an upper limit on the number of your service's tasks that are allowed
         * in the <code>RUNNING</code> or <code>PENDING</code> state during a deployment,
         * as a percentage of the <code>desiredCount</code> (rounded down to the nearest
         * integer). This parameter enables you to define the deployment batch size. For
         * example, if <code>desiredCount</code> is four tasks and the maximum is 200%, the
         * scheduler can start four new tasks before stopping the four older tasks
         * (provided that the cluster resources required to do this are available). The
         * default value is 200%.</p> <p>When the service scheduler launches new tasks, it
         * determines task placement in your cluster using the following logic:</p> <ul>
         * <li> <p>Determine which of the container instances in your cluster can support
         * your service's task definition (for example, they have the required CPU, memory,
         * ports, and container instance attributes).</p> </li> <li> <p>By default, the
         * service scheduler attempts to balance tasks across Availability Zones in this
         * manner (although you can choose a different placement strategy):</p> <ul> <li>
         * <p>Sort the valid container instances by the fewest number of running tasks for
         * this service in the same Availability Zone as the instance. For example, if zone
         * A has one running service task and zones B and C each have zero, valid container
         * instances in either zone B or C are considered optimal for placement.</p> </li>
         * <li> <p>Place the new service task on a valid container instance in an optimal
         * Availability Zone (based on the previous steps), favoring container instances
         * with the fewest number of running tasks for this service.</p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateService">AWS
         * API Reference</a></p>
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
         * additional cluster capacity. For example, if <code>desiredCount</code> is four
         * tasks and the minimum is 50%, the scheduler can stop two existing tasks to free
         * up cluster capacity before starting two new tasks. Tasks for services that do
         * not use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer. The default value is 50% in the console and 100% for the AWS CLI, the
         * AWS SDKs, and the APIs.</p> <p>The <code>maximumPercent</code> parameter
         * represents an upper limit on the number of your service's tasks that are allowed
         * in the <code>RUNNING</code> or <code>PENDING</code> state during a deployment,
         * as a percentage of the <code>desiredCount</code> (rounded down to the nearest
         * integer). This parameter enables you to define the deployment batch size. For
         * example, if <code>desiredCount</code> is four tasks and the maximum is 200%, the
         * scheduler can start four new tasks before stopping the four older tasks
         * (provided that the cluster resources required to do this are available). The
         * default value is 200%.</p> <p>When the service scheduler launches new tasks, it
         * determines task placement in your cluster using the following logic:</p> <ul>
         * <li> <p>Determine which of the container instances in your cluster can support
         * your service's task definition (for example, they have the required CPU, memory,
         * ports, and container instance attributes).</p> </li> <li> <p>By default, the
         * service scheduler attempts to balance tasks across Availability Zones in this
         * manner (although you can choose a different placement strategy):</p> <ul> <li>
         * <p>Sort the valid container instances by the fewest number of running tasks for
         * this service in the same Availability Zone as the instance. For example, if zone
         * A has one running service task and zones B and C each have zero, valid container
         * instances in either zone B or C are considered optimal for placement.</p> </li>
         * <li> <p>Place the new service task on a valid container instance in an optimal
         * Availability Zone (based on the previous steps), favoring container instances
         * with the fewest number of running tasks for this service.</p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CreateService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more custom attributes from an Amazon ECS
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttributesOutcome DeleteAttributes(const Model::DeleteAttributesRequest& request) const;

        /**
         * <p>Deletes one or more custom attributes from an Amazon ECS
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAttributesOutcomeCallable DeleteAttributesCallable(const Model::DeleteAttributesRequest& request) const;

        /**
         * <p>Deletes one or more custom attributes from an Amazon ECS
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAttributesAsync(const Model::DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified cluster. You must deregister all container instances
         * from this cluster before you may delete it. You can list the container instances
         * in a cluster with <a>ListContainerInstances</a> and deregister them with
         * <a>DeregisterContainerInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the specified cluster. You must deregister all container instances
         * from this cluster before you may delete it. You can list the container instances
         * in a cluster with <a>ListContainerInstances</a> and deregister them with
         * <a>DeregisterContainerInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the specified cluster. You must deregister all container instances
         * from this cluster before you may delete it. You can list the container instances
         * in a cluster with <a>ListContainerInstances</a> and deregister them with
         * <a>DeregisterContainerInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteCluster">AWS
         * API Reference</a></p>
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
         * <code>ServiceNotFoundException</code> error.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteService">AWS
         * API Reference</a></p>
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
         * <code>ServiceNotFoundException</code> error.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteService">AWS
         * API Reference</a></p>
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
         * <code>ServiceNotFoundException</code> error.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeleteService">AWS
         * API Reference</a></p>
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
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterContainerInstance">AWS
         * API Reference</a></p>
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
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterContainerInstance">AWS
         * API Reference</a></p>
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
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterContainerInstance">AWS
         * API Reference</a></p>
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
         * restrictions have not yet taken effect).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterTaskDefinition">AWS
         * API Reference</a></p>
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
         * restrictions have not yet taken effect).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterTaskDefinition">AWS
         * API Reference</a></p>
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
         * restrictions have not yet taken effect).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterTaskDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTaskDefinitionAsync(const Model::DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

        /**
         * <p>Describes one or more of your clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

        /**
         * <p>Describes one or more of your clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Amazon EC2 Container Service container instances. Returns metadata
         * about registered and remaining resources on each container instance
         * requested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeContainerInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContainerInstancesOutcome DescribeContainerInstances(const Model::DescribeContainerInstancesRequest& request) const;

        /**
         * <p>Describes Amazon EC2 Container Service container instances. Returns metadata
         * about registered and remaining resources on each container instance
         * requested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeContainerInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContainerInstancesOutcomeCallable DescribeContainerInstancesCallable(const Model::DescribeContainerInstancesRequest& request) const;

        /**
         * <p>Describes Amazon EC2 Container Service container instances. Returns metadata
         * about registered and remaining resources on each container instance
         * requested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeContainerInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContainerInstancesAsync(const Model::DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified services running in your cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeServices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;

        /**
         * <p>Describes the specified services running in your cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request) const;

        /**
         * <p>Describes the specified services running in your cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeServices">AWS
         * API Reference</a></p>
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
         * references them.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTaskDefinitionOutcome DescribeTaskDefinition(const Model::DescribeTaskDefinitionRequest& request) const;

        /**
         * <p>Describes a task definition. You can specify a <code>family</code> and
         * <code>revision</code> to find information about a specific task definition, or
         * you can simply specify the family to find the latest <code>ACTIVE</code>
         * revision in that family.</p> <note> <p>You can only describe
         * <code>INACTIVE</code> task definitions while an active task or service
         * references them.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTaskDefinition">AWS
         * API Reference</a></p>
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
         * references them.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTaskDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTaskDefinitionAsync(const Model::DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a specified task or tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest& request) const;

        /**
         * <p>Describes a specified task or tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request) const;

        /**
         * <p>Describes a specified task or tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Returns an
         * endpoint for the Amazon EC2 Container Service agent to poll for
         * updates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DiscoverPollEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DiscoverPollEndpointOutcome DiscoverPollEndpoint(const Model::DiscoverPollEndpointRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Returns an
         * endpoint for the Amazon EC2 Container Service agent to poll for
         * updates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DiscoverPollEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DiscoverPollEndpointOutcomeCallable DiscoverPollEndpointCallable(const Model::DiscoverPollEndpointRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Returns an
         * endpoint for the Amazon EC2 Container Service agent to poll for
         * updates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DiscoverPollEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DiscoverPollEndpointAsync(const Model::DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the attributes for Amazon ECS resources within a specified target type
         * and cluster. When you specify a target type and cluster,
         * <code>LisAttributes</code> returns a list of attribute objects, one for each
         * attribute on each resource. You can filter the list of results to a single
         * attribute name to only return results that have that name. You can also filter
         * the results by attribute name and value, for example, to see which container
         * instances in a cluster are running a Linux AMI (<code>ecs.os-type=linux</code>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttributesOutcome ListAttributes(const Model::ListAttributesRequest& request) const;

        /**
         * <p>Lists the attributes for Amazon ECS resources within a specified target type
         * and cluster. When you specify a target type and cluster,
         * <code>LisAttributes</code> returns a list of attribute objects, one for each
         * attribute on each resource. You can filter the list of results to a single
         * attribute name to only return results that have that name. You can also filter
         * the results by attribute name and value, for example, to see which container
         * instances in a cluster are running a Linux AMI (<code>ecs.os-type=linux</code>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttributesOutcomeCallable ListAttributesCallable(const Model::ListAttributesRequest& request) const;

        /**
         * <p>Lists the attributes for Amazon ECS resources within a specified target type
         * and cluster. When you specify a target type and cluster,
         * <code>LisAttributes</code> returns a list of attribute objects, one for each
         * attribute on each resource. You can filter the list of results to a single
         * attribute name to only return results that have that name. You can also filter
         * the results by attribute name and value, for example, to see which container
         * instances in a cluster are running a Linux AMI (<code>ecs.os-type=linux</code>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttributesAsync(const Model::ListAttributesRequest& request, const ListAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * <p>Returns a list of existing clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * <p>Returns a list of existing clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of container instances in a specified cluster. You can filter
         * the results of a <code>ListContainerInstances</code> operation with cluster
         * query language statements inside the <code>filter</code> parameter. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
         * Query Language</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListContainerInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContainerInstancesOutcome ListContainerInstances(const Model::ListContainerInstancesRequest& request) const;

        /**
         * <p>Returns a list of container instances in a specified cluster. You can filter
         * the results of a <code>ListContainerInstances</code> operation with cluster
         * query language statements inside the <code>filter</code> parameter. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
         * Query Language</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListContainerInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContainerInstancesOutcomeCallable ListContainerInstancesCallable(const Model::ListContainerInstancesRequest& request) const;

        /**
         * <p>Returns a list of container instances in a specified cluster. You can filter
         * the results of a <code>ListContainerInstances</code> operation with cluster
         * query language statements inside the <code>filter</code> parameter. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
         * Query Language</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListContainerInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContainerInstancesAsync(const Model::ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the services that are running in a specified cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * <p>Lists the services that are running in a specified cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /**
         * <p>Lists the services that are running in a specified cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListServices">AWS
         * API Reference</a></p>
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
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTaskDefinitionFamilies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskDefinitionFamiliesOutcome ListTaskDefinitionFamilies(const Model::ListTaskDefinitionFamiliesRequest& request) const;

        /**
         * <p>Returns a list of task definition families that are registered to your
         * account (which may include task definition families that no longer have any
         * <code>ACTIVE</code> task definition revisions).</p> <p>You can filter out task
         * definition families that do not contain any <code>ACTIVE</code> task definition
         * revisions by setting the <code>status</code> parameter to <code>ACTIVE</code>.
         * You can also filter the results with the <code>familyPrefix</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTaskDefinitionFamilies">AWS
         * API Reference</a></p>
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
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTaskDefinitionFamilies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTaskDefinitionFamiliesAsync(const Model::ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of task definitions that are registered to your account. You
         * can filter the results by family name with the <code>familyPrefix</code>
         * parameter or by status with the <code>status</code> parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTaskDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskDefinitionsOutcome ListTaskDefinitions(const Model::ListTaskDefinitionsRequest& request) const;

        /**
         * <p>Returns a list of task definitions that are registered to your account. You
         * can filter the results by family name with the <code>familyPrefix</code>
         * parameter or by status with the <code>status</code> parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTaskDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTaskDefinitionsOutcomeCallable ListTaskDefinitionsCallable(const Model::ListTaskDefinitionsRequest& request) const;

        /**
         * <p>Returns a list of task definitions that are registered to your account. You
         * can filter the results by family name with the <code>familyPrefix</code>
         * parameter or by status with the <code>status</code> parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTaskDefinitions">AWS
         * API Reference</a></p>
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
         * results for at least one hour. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTasks">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

        /**
         * <p>Returns a list of tasks for a specified cluster. You can filter the results
         * by family name, by a particular container instance, or by the desired status of
         * the task with the <code>family</code>, <code>containerInstance</code>, and
         * <code>desiredStatus</code> parameters.</p> <p>Recently-stopped tasks might
         * appear in the returned results. Currently, stopped tasks appear in the returned
         * results for at least one hour. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTasks">AWS API
         * Reference</a></p>
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
         * results for at least one hour. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ListTasks">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTasksAsync(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create or update an attribute on an Amazon ECS resource. If the attribute
         * does not exist, it is created. If the attribute exists, its value is replaced
         * with the specified value. To delete an attribute, use <a>DeleteAttributes</a>.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
         * in the <i>Amazon EC2 Container Service Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PutAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAttributesOutcome PutAttributes(const Model::PutAttributesRequest& request) const;

        /**
         * <p>Create or update an attribute on an Amazon ECS resource. If the attribute
         * does not exist, it is created. If the attribute exists, its value is replaced
         * with the specified value. To delete an attribute, use <a>DeleteAttributes</a>.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
         * in the <i>Amazon EC2 Container Service Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PutAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAttributesOutcomeCallable PutAttributesCallable(const Model::PutAttributesRequest& request) const;

        /**
         * <p>Create or update an attribute on an Amazon ECS resource. If the attribute
         * does not exist, it is created. If the attribute exists, its value is replaced
         * with the specified value. To delete an attribute, use <a>DeleteAttributes</a>.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
         * in the <i>Amazon EC2 Container Service Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PutAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAttributesAsync(const Model::PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Registers an
         * EC2 instance into the specified cluster. This instance becomes available to
         * place containers on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterContainerInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterContainerInstanceOutcome RegisterContainerInstance(const Model::RegisterContainerInstanceRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Registers an
         * EC2 instance into the specified cluster. This instance becomes available to
         * place containers on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterContainerInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterContainerInstanceOutcomeCallable RegisterContainerInstanceCallable(const Model::RegisterContainerInstanceRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Registers an
         * EC2 instance into the specified cluster. This instance becomes available to
         * place containers on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterContainerInstance">AWS
         * API Reference</a></p>
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
         * settings</a> in the Docker run reference.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterTaskDefinition">AWS
         * API Reference</a></p>
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
         * settings</a> in the Docker run reference.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterTaskDefinition">AWS
         * API Reference</a></p>
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
         * settings</a> in the Docker run reference.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterTaskDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTaskDefinitionAsync(const Model::RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new task using the specified task definition.</p> <p>You can allow
         * Amazon ECS to place tasks for you, or you can customize how Amazon ECS places
         * tasks using placement constraints and placement strategies. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling
         * Tasks</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
         * <p>Alternatively, you can use <a>StartTask</a> to use your own scheduler or
         * place tasks manually on specific container instances.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RunTask">AWS API
         * Reference</a></p>
         */
        virtual Model::RunTaskOutcome RunTask(const Model::RunTaskRequest& request) const;

        /**
         * <p>Starts a new task using the specified task definition.</p> <p>You can allow
         * Amazon ECS to place tasks for you, or you can customize how Amazon ECS places
         * tasks using placement constraints and placement strategies. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling
         * Tasks</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
         * <p>Alternatively, you can use <a>StartTask</a> to use your own scheduler or
         * place tasks manually on specific container instances.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RunTask">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunTaskOutcomeCallable RunTaskCallable(const Model::RunTaskRequest& request) const;

        /**
         * <p>Starts a new task using the specified task definition.</p> <p>You can allow
         * Amazon ECS to place tasks for you, or you can customize how Amazon ECS places
         * tasks using placement constraints and placement strategies. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling
         * Tasks</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
         * <p>Alternatively, you can use <a>StartTask</a> to use your own scheduler or
         * place tasks manually on specific container instances.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RunTask">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunTaskAsync(const Model::RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new task from the specified task definition on the specified
         * container instance or instances.</p> <p>Alternatively, you can use
         * <a>RunTask</a> to place tasks for you. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling
         * Tasks</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/StartTask">AWS API
         * Reference</a></p>
         */
        virtual Model::StartTaskOutcome StartTask(const Model::StartTaskRequest& request) const;

        /**
         * <p>Starts a new task from the specified task definition on the specified
         * container instance or instances.</p> <p>Alternatively, you can use
         * <a>RunTask</a> to place tasks for you. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling
         * Tasks</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/StartTask">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTaskOutcomeCallable StartTaskCallable(const Model::StartTaskRequest& request) const;

        /**
         * <p>Starts a new task from the specified task definition on the specified
         * container instance or instances.</p> <p>Alternatively, you can use
         * <a>RunTask</a> to place tasks for you. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/scheduling_tasks.html">Scheduling
         * Tasks</a> in the <i>Amazon EC2 Container Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/StartTask">AWS API
         * Reference</a></p>
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
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/StopTask">AWS API
         * Reference</a></p>
         */
        virtual Model::StopTaskOutcome StopTask(const Model::StopTaskRequest& request) const;

        /**
         * <p>Stops a running task.</p> <p>When <a>StopTask</a> is called on a task, the
         * equivalent of <code>docker stop</code> is issued to the containers running in
         * the task. This results in a <code>SIGTERM</code> and a 30-second timeout, after
         * which <code>SIGKILL</code> is sent and the containers are forcibly stopped. If
         * the container handles the <code>SIGTERM</code> gracefully and exits within 30
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/StopTask">AWS API
         * Reference</a></p>
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
         * seconds from receiving it, no <code>SIGKILL</code> is sent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/StopTask">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTaskAsync(const Model::StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a container changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitContainerStateChange">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitContainerStateChangeOutcome SubmitContainerStateChange(const Model::SubmitContainerStateChangeRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a container changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitContainerStateChange">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitContainerStateChangeOutcomeCallable SubmitContainerStateChangeCallable(const Model::SubmitContainerStateChangeRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a container changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitContainerStateChange">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubmitContainerStateChangeAsync(const Model::SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a task changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitTaskStateChange">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitTaskStateChangeOutcome SubmitTaskStateChange(const Model::SubmitTaskStateChangeRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a task changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitTaskStateChange">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitTaskStateChangeOutcomeCallable SubmitTaskStateChangeCallable(const Model::SubmitTaskStateChangeRequest& request) const;

        /**
         * <note> <p>This action is only used by the Amazon EC2 Container Service agent,
         * and it is not intended for use outside of the agent.</p> </note> <p>Sent to
         * acknowledge that a task changed states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SubmitTaskStateChange">AWS
         * API Reference</a></p>
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
         * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateContainerAgent">AWS
         * API Reference</a></p>
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
         * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateContainerAgent">AWS
         * API Reference</a></p>
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
         * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateContainerAgent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContainerAgentAsync(const Model::UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the status of an Amazon ECS container instance.</p> <p>You can
         * change the status of a container instance to <code>DRAINING</code> to manually
         * remove an instance from a cluster, for example to perform system updates, update
         * the Docker daemon, or scale down the cluster size. </p> <p>When you set a
         * container instance to <code>DRAINING</code>, Amazon ECS prevents new tasks from
         * being scheduled for placement on the container instance and replacement service
         * tasks are started on other container instances in the cluster if the resources
         * are available. Service tasks on the container instance that are in the
         * <code>PENDING</code> state are stopped immediately.</p> <p>Service tasks on the
         * container instance that are in the <code>RUNNING</code> state are stopped and
         * replaced according the service's deployment configuration parameters,
         * <code>minimumHealthyPercent</code> and <code>maximumPercent</code>. Note that
         * you can change the deployment configuration of your service using
         * <a>UpdateService</a>.</p> <ul> <li> <p>If <code>minimumHealthyPercent</code> is
         * below 100%, the scheduler can ignore <code>desiredCount</code> temporarily
         * during task replacement. For example, <code>desiredCount</code> is four tasks, a
         * minimum of 50% allows the scheduler to stop two existing tasks before starting
         * two new tasks. If the minimum is 100%, the service scheduler can't remove
         * existing tasks until the replacement tasks are considered healthy. Tasks for
         * services that do not use a load balancer are considered healthy if they are in
         * the <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer.</p> </li> <li> <p>The <code>maximumPercent</code> parameter represents
         * an upper limit on the number of running tasks during task replacement, which
         * enables you to define the replacement batch size. For example, if
         * <code>desiredCount</code> of four tasks, a maximum of 200% starts four new tasks
         * before stopping the four tasks to be drained (provided that the cluster
         * resources required to do this are available). If the maximum is 100%, then
         * replacement tasks can't start until the draining tasks have stopped.</p> </li>
         * </ul> <p>Any <code>PENDING</code> or <code>RUNNING</code> tasks that do not
         * belong to a service are not affected; you must wait for them to finish or stop
         * them manually.</p> <p>A container instance has completed draining when it has no
         * more <code>RUNNING</code> tasks. You can verify this using <a>ListTasks</a>.</p>
         * <p>When you set a container instance to <code>ACTIVE</code>, the Amazon ECS
         * scheduler can begin scheduling tasks on the instance again.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateContainerInstancesState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContainerInstancesStateOutcome UpdateContainerInstancesState(const Model::UpdateContainerInstancesStateRequest& request) const;

        /**
         * <p>Modifies the status of an Amazon ECS container instance.</p> <p>You can
         * change the status of a container instance to <code>DRAINING</code> to manually
         * remove an instance from a cluster, for example to perform system updates, update
         * the Docker daemon, or scale down the cluster size. </p> <p>When you set a
         * container instance to <code>DRAINING</code>, Amazon ECS prevents new tasks from
         * being scheduled for placement on the container instance and replacement service
         * tasks are started on other container instances in the cluster if the resources
         * are available. Service tasks on the container instance that are in the
         * <code>PENDING</code> state are stopped immediately.</p> <p>Service tasks on the
         * container instance that are in the <code>RUNNING</code> state are stopped and
         * replaced according the service's deployment configuration parameters,
         * <code>minimumHealthyPercent</code> and <code>maximumPercent</code>. Note that
         * you can change the deployment configuration of your service using
         * <a>UpdateService</a>.</p> <ul> <li> <p>If <code>minimumHealthyPercent</code> is
         * below 100%, the scheduler can ignore <code>desiredCount</code> temporarily
         * during task replacement. For example, <code>desiredCount</code> is four tasks, a
         * minimum of 50% allows the scheduler to stop two existing tasks before starting
         * two new tasks. If the minimum is 100%, the service scheduler can't remove
         * existing tasks until the replacement tasks are considered healthy. Tasks for
         * services that do not use a load balancer are considered healthy if they are in
         * the <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer.</p> </li> <li> <p>The <code>maximumPercent</code> parameter represents
         * an upper limit on the number of running tasks during task replacement, which
         * enables you to define the replacement batch size. For example, if
         * <code>desiredCount</code> of four tasks, a maximum of 200% starts four new tasks
         * before stopping the four tasks to be drained (provided that the cluster
         * resources required to do this are available). If the maximum is 100%, then
         * replacement tasks can't start until the draining tasks have stopped.</p> </li>
         * </ul> <p>Any <code>PENDING</code> or <code>RUNNING</code> tasks that do not
         * belong to a service are not affected; you must wait for them to finish or stop
         * them manually.</p> <p>A container instance has completed draining when it has no
         * more <code>RUNNING</code> tasks. You can verify this using <a>ListTasks</a>.</p>
         * <p>When you set a container instance to <code>ACTIVE</code>, the Amazon ECS
         * scheduler can begin scheduling tasks on the instance again.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateContainerInstancesState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContainerInstancesStateOutcomeCallable UpdateContainerInstancesStateCallable(const Model::UpdateContainerInstancesStateRequest& request) const;

        /**
         * <p>Modifies the status of an Amazon ECS container instance.</p> <p>You can
         * change the status of a container instance to <code>DRAINING</code> to manually
         * remove an instance from a cluster, for example to perform system updates, update
         * the Docker daemon, or scale down the cluster size. </p> <p>When you set a
         * container instance to <code>DRAINING</code>, Amazon ECS prevents new tasks from
         * being scheduled for placement on the container instance and replacement service
         * tasks are started on other container instances in the cluster if the resources
         * are available. Service tasks on the container instance that are in the
         * <code>PENDING</code> state are stopped immediately.</p> <p>Service tasks on the
         * container instance that are in the <code>RUNNING</code> state are stopped and
         * replaced according the service's deployment configuration parameters,
         * <code>minimumHealthyPercent</code> and <code>maximumPercent</code>. Note that
         * you can change the deployment configuration of your service using
         * <a>UpdateService</a>.</p> <ul> <li> <p>If <code>minimumHealthyPercent</code> is
         * below 100%, the scheduler can ignore <code>desiredCount</code> temporarily
         * during task replacement. For example, <code>desiredCount</code> is four tasks, a
         * minimum of 50% allows the scheduler to stop two existing tasks before starting
         * two new tasks. If the minimum is 100%, the service scheduler can't remove
         * existing tasks until the replacement tasks are considered healthy. Tasks for
         * services that do not use a load balancer are considered healthy if they are in
         * the <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer.</p> </li> <li> <p>The <code>maximumPercent</code> parameter represents
         * an upper limit on the number of running tasks during task replacement, which
         * enables you to define the replacement batch size. For example, if
         * <code>desiredCount</code> of four tasks, a maximum of 200% starts four new tasks
         * before stopping the four tasks to be drained (provided that the cluster
         * resources required to do this are available). If the maximum is 100%, then
         * replacement tasks can't start until the draining tasks have stopped.</p> </li>
         * </ul> <p>Any <code>PENDING</code> or <code>RUNNING</code> tasks that do not
         * belong to a service are not affected; you must wait for them to finish or stop
         * them manually.</p> <p>A container instance has completed draining when it has no
         * more <code>RUNNING</code> tasks. You can verify this using <a>ListTasks</a>.</p>
         * <p>When you set a container instance to <code>ACTIVE</code>, the Amazon ECS
         * scheduler can begin scheduling tasks on the instance again.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateContainerInstancesState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContainerInstancesStateAsync(const Model::UpdateContainerInstancesStateRequest& request, const UpdateContainerInstancesStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * to determine the deployment strategy.</p> <ul> <li> <p>If
         * <code>minimumHealthyPercent</code> is below 100%, the scheduler can ignore
         * <code>desiredCount</code> temporarily during a deployment. For example, if
         * <code>desiredCount</code> is four tasks, a minimum of 50% allows the scheduler
         * to stop two existing tasks before starting two new tasks. Tasks for services
         * that do not use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer.</p> </li> <li> <p>The <code>maximumPercent</code> parameter represents
         * an upper limit on the number of running tasks during a deployment, which enables
         * you to define the deployment batch size. For example, if
         * <code>desiredCount</code> is four tasks, a maximum of 200% starts four new tasks
         * before stopping the four older tasks (provided that the cluster resources
         * required to do this are available).</p> </li> </ul> <p>When <a>UpdateService</a>
         * stops a task during a deployment, the equivalent of <code>docker stop</code> is
         * issued to the containers running in the task. This results in a
         * <code>SIGTERM</code> and a 30-second timeout, after which <code>SIGKILL</code>
         * is sent and the containers are forcibly stopped. If the container handles the
         * <code>SIGTERM</code> gracefully and exits within 30 seconds from receiving it,
         * no <code>SIGKILL</code> is sent.</p> <p>When the service scheduler launches new
         * tasks, it determines task placement in your cluster with the following
         * logic:</p> <ul> <li> <p>Determine which of the container instances in your
         * cluster can support your service's task definition (for example, they have the
         * required CPU, memory, ports, and container instance attributes).</p> </li> <li>
         * <p>By default, the service scheduler attempts to balance tasks across
         * Availability Zones in this manner (although you can choose a different placement
         * strategy):</p> <ul> <li> <p>Sort the valid container instances by the fewest
         * number of running tasks for this service in the same Availability Zone as the
         * instance. For example, if zone A has one running service task and zones B and C
         * each have zero, valid container instances in either zone B or C are considered
         * optimal for placement.</p> </li> <li> <p>Place the new service task on a valid
         * container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the fewest number of running tasks for
         * this service.</p> </li> </ul> </li> </ul> <p>When the service scheduler stops
         * running tasks, it attempts to maintain balance across the Availability Zones in
         * your cluster using the following logic: </p> <ul> <li> <p>Sort the container
         * instances by the largest number of running tasks for this service in the same
         * Availability Zone as the instance. For example, if zone A has one running
         * service task and zones B and C each have two, container instances in either zone
         * B or C are considered optimal for termination.</p> </li> <li> <p>Stop the task
         * on a container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the largest number of running tasks
         * for this service.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateService">AWS
         * API Reference</a></p>
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
         * to determine the deployment strategy.</p> <ul> <li> <p>If
         * <code>minimumHealthyPercent</code> is below 100%, the scheduler can ignore
         * <code>desiredCount</code> temporarily during a deployment. For example, if
         * <code>desiredCount</code> is four tasks, a minimum of 50% allows the scheduler
         * to stop two existing tasks before starting two new tasks. Tasks for services
         * that do not use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer.</p> </li> <li> <p>The <code>maximumPercent</code> parameter represents
         * an upper limit on the number of running tasks during a deployment, which enables
         * you to define the deployment batch size. For example, if
         * <code>desiredCount</code> is four tasks, a maximum of 200% starts four new tasks
         * before stopping the four older tasks (provided that the cluster resources
         * required to do this are available).</p> </li> </ul> <p>When <a>UpdateService</a>
         * stops a task during a deployment, the equivalent of <code>docker stop</code> is
         * issued to the containers running in the task. This results in a
         * <code>SIGTERM</code> and a 30-second timeout, after which <code>SIGKILL</code>
         * is sent and the containers are forcibly stopped. If the container handles the
         * <code>SIGTERM</code> gracefully and exits within 30 seconds from receiving it,
         * no <code>SIGKILL</code> is sent.</p> <p>When the service scheduler launches new
         * tasks, it determines task placement in your cluster with the following
         * logic:</p> <ul> <li> <p>Determine which of the container instances in your
         * cluster can support your service's task definition (for example, they have the
         * required CPU, memory, ports, and container instance attributes).</p> </li> <li>
         * <p>By default, the service scheduler attempts to balance tasks across
         * Availability Zones in this manner (although you can choose a different placement
         * strategy):</p> <ul> <li> <p>Sort the valid container instances by the fewest
         * number of running tasks for this service in the same Availability Zone as the
         * instance. For example, if zone A has one running service task and zones B and C
         * each have zero, valid container instances in either zone B or C are considered
         * optimal for placement.</p> </li> <li> <p>Place the new service task on a valid
         * container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the fewest number of running tasks for
         * this service.</p> </li> </ul> </li> </ul> <p>When the service scheduler stops
         * running tasks, it attempts to maintain balance across the Availability Zones in
         * your cluster using the following logic: </p> <ul> <li> <p>Sort the container
         * instances by the largest number of running tasks for this service in the same
         * Availability Zone as the instance. For example, if zone A has one running
         * service task and zones B and C each have two, container instances in either zone
         * B or C are considered optimal for termination.</p> </li> <li> <p>Stop the task
         * on a container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the largest number of running tasks
         * for this service.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateService">AWS
         * API Reference</a></p>
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
         * to determine the deployment strategy.</p> <ul> <li> <p>If
         * <code>minimumHealthyPercent</code> is below 100%, the scheduler can ignore
         * <code>desiredCount</code> temporarily during a deployment. For example, if
         * <code>desiredCount</code> is four tasks, a minimum of 50% allows the scheduler
         * to stop two existing tasks before starting two new tasks. Tasks for services
         * that do not use a load balancer are considered healthy if they are in the
         * <code>RUNNING</code> state. Tasks for services that use a load balancer are
         * considered healthy if they are in the <code>RUNNING</code> state and the
         * container instance they are hosted on is reported as healthy by the load
         * balancer.</p> </li> <li> <p>The <code>maximumPercent</code> parameter represents
         * an upper limit on the number of running tasks during a deployment, which enables
         * you to define the deployment batch size. For example, if
         * <code>desiredCount</code> is four tasks, a maximum of 200% starts four new tasks
         * before stopping the four older tasks (provided that the cluster resources
         * required to do this are available).</p> </li> </ul> <p>When <a>UpdateService</a>
         * stops a task during a deployment, the equivalent of <code>docker stop</code> is
         * issued to the containers running in the task. This results in a
         * <code>SIGTERM</code> and a 30-second timeout, after which <code>SIGKILL</code>
         * is sent and the containers are forcibly stopped. If the container handles the
         * <code>SIGTERM</code> gracefully and exits within 30 seconds from receiving it,
         * no <code>SIGKILL</code> is sent.</p> <p>When the service scheduler launches new
         * tasks, it determines task placement in your cluster with the following
         * logic:</p> <ul> <li> <p>Determine which of the container instances in your
         * cluster can support your service's task definition (for example, they have the
         * required CPU, memory, ports, and container instance attributes).</p> </li> <li>
         * <p>By default, the service scheduler attempts to balance tasks across
         * Availability Zones in this manner (although you can choose a different placement
         * strategy):</p> <ul> <li> <p>Sort the valid container instances by the fewest
         * number of running tasks for this service in the same Availability Zone as the
         * instance. For example, if zone A has one running service task and zones B and C
         * each have zero, valid container instances in either zone B or C are considered
         * optimal for placement.</p> </li> <li> <p>Place the new service task on a valid
         * container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the fewest number of running tasks for
         * this service.</p> </li> </ul> </li> </ul> <p>When the service scheduler stops
         * running tasks, it attempts to maintain balance across the Availability Zones in
         * your cluster using the following logic: </p> <ul> <li> <p>Sort the container
         * instances by the largest number of running tasks for this service in the same
         * Availability Zone as the instance. For example, if zone A has one running
         * service task and zones B and C each have two, container instances in either zone
         * B or C are considered optimal for termination.</p> </li> <li> <p>Stop the task
         * on a container instance in an optimal Availability Zone (based on the previous
         * steps), favoring container instances with the largest number of running tasks
         * for this service.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/UpdateService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceAsyncHelper(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAttributesAsyncHelper(const Model::DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void ListAttributesAsyncHelper(const Model::ListAttributesRequest& request, const ListAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContainerInstancesAsyncHelper(const Model::ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServicesAsyncHelper(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTaskDefinitionFamiliesAsyncHelper(const Model::ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTaskDefinitionsAsyncHelper(const Model::ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTasksAsyncHelper(const Model::ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAttributesAsyncHelper(const Model::PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterContainerInstanceAsyncHelper(const Model::RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTaskDefinitionAsyncHelper(const Model::RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunTaskAsyncHelper(const Model::RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTaskAsyncHelper(const Model::StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTaskAsyncHelper(const Model::StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitContainerStateChangeAsyncHelper(const Model::SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitTaskStateChangeAsyncHelper(const Model::SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContainerAgentAsyncHelper(const Model::UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContainerInstancesStateAsyncHelper(const Model::UpdateContainerInstancesStateRequest& request, const UpdateContainerInstancesStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceAsyncHelper(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ECS
} // namespace Aws
