/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/Event.h>
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
#include <future>

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

  typedef Utils::Outcome<CreateClusterResult, Client::AWSError<ECSErrors>> CreateClusterOutcome;
  typedef Utils::Outcome<CreateServiceResult, Client::AWSError<ECSErrors>> CreateServiceOutcome;
  typedef Utils::Outcome<DeleteClusterResult, Client::AWSError<ECSErrors>> DeleteClusterOutcome;
  typedef Utils::Outcome<DeleteServiceResult, Client::AWSError<ECSErrors>> DeleteServiceOutcome;
  typedef Utils::Outcome<DeregisterContainerInstanceResult, Client::AWSError<ECSErrors>> DeregisterContainerInstanceOutcome;
  typedef Utils::Outcome<DeregisterTaskDefinitionResult, Client::AWSError<ECSErrors>> DeregisterTaskDefinitionOutcome;
  typedef Utils::Outcome<DescribeClustersResult, Client::AWSError<ECSErrors>> DescribeClustersOutcome;
  typedef Utils::Outcome<DescribeContainerInstancesResult, Client::AWSError<ECSErrors>> DescribeContainerInstancesOutcome;
  typedef Utils::Outcome<DescribeServicesResult, Client::AWSError<ECSErrors>> DescribeServicesOutcome;
  typedef Utils::Outcome<DescribeTaskDefinitionResult, Client::AWSError<ECSErrors>> DescribeTaskDefinitionOutcome;
  typedef Utils::Outcome<DescribeTasksResult, Client::AWSError<ECSErrors>> DescribeTasksOutcome;
  typedef Utils::Outcome<DiscoverPollEndpointResult, Client::AWSError<ECSErrors>> DiscoverPollEndpointOutcome;
  typedef Utils::Outcome<ListClustersResult, Client::AWSError<ECSErrors>> ListClustersOutcome;
  typedef Utils::Outcome<ListContainerInstancesResult, Client::AWSError<ECSErrors>> ListContainerInstancesOutcome;
  typedef Utils::Outcome<ListServicesResult, Client::AWSError<ECSErrors>> ListServicesOutcome;
  typedef Utils::Outcome<ListTaskDefinitionFamiliesResult, Client::AWSError<ECSErrors>> ListTaskDefinitionFamiliesOutcome;
  typedef Utils::Outcome<ListTaskDefinitionsResult, Client::AWSError<ECSErrors>> ListTaskDefinitionsOutcome;
  typedef Utils::Outcome<ListTasksResult, Client::AWSError<ECSErrors>> ListTasksOutcome;
  typedef Utils::Outcome<RegisterContainerInstanceResult, Client::AWSError<ECSErrors>> RegisterContainerInstanceOutcome;
  typedef Utils::Outcome<RegisterTaskDefinitionResult, Client::AWSError<ECSErrors>> RegisterTaskDefinitionOutcome;
  typedef Utils::Outcome<RunTaskResult, Client::AWSError<ECSErrors>> RunTaskOutcome;
  typedef Utils::Outcome<StartTaskResult, Client::AWSError<ECSErrors>> StartTaskOutcome;
  typedef Utils::Outcome<StopTaskResult, Client::AWSError<ECSErrors>> StopTaskOutcome;
  typedef Utils::Outcome<SubmitContainerStateChangeResult, Client::AWSError<ECSErrors>> SubmitContainerStateChangeOutcome;
  typedef Utils::Outcome<SubmitTaskStateChangeResult, Client::AWSError<ECSErrors>> SubmitTaskStateChangeOutcome;
  typedef Utils::Outcome<UpdateContainerAgentResult, Client::AWSError<ECSErrors>> UpdateContainerAgentOutcome;
  typedef Utils::Outcome<UpdateServiceResult, Client::AWSError<ECSErrors>> UpdateServiceOutcome;

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

  typedef Aws::Utils::Event<ECSClient, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const Aws::Client::AsyncCallerContext*> CreateClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const Aws::Client::AsyncCallerContext*> CreateServiceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const Aws::Client::AsyncCallerContext*> DeleteClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const Aws::Client::AsyncCallerContext*> DeleteServiceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DeregisterContainerInstanceRequest&, const Model::DeregisterContainerInstanceOutcome&, const Aws::Client::AsyncCallerContext*> DeregisterContainerInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DeregisterTaskDefinitionRequest&, const Model::DeregisterTaskDefinitionOutcome&, const Aws::Client::AsyncCallerContext*> DeregisterTaskDefinitionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClustersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DescribeContainerInstancesRequest&, const Model::DescribeContainerInstancesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeContainerInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DescribeServicesRequest&, const Model::DescribeServicesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeServicesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DescribeTaskDefinitionRequest&, const Model::DescribeTaskDefinitionOutcome&, const Aws::Client::AsyncCallerContext*> DescribeTaskDefinitionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DescribeTasksRequest&, const Model::DescribeTasksOutcome&, const Aws::Client::AsyncCallerContext*> DescribeTasksOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::DiscoverPollEndpointRequest&, const Model::DiscoverPollEndpointOutcome&, const Aws::Client::AsyncCallerContext*> DiscoverPollEndpointOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const Aws::Client::AsyncCallerContext*> ListClustersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::ListContainerInstancesRequest&, const Model::ListContainerInstancesOutcome&, const Aws::Client::AsyncCallerContext*> ListContainerInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const Aws::Client::AsyncCallerContext*> ListServicesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::ListTaskDefinitionFamiliesRequest&, const Model::ListTaskDefinitionFamiliesOutcome&, const Aws::Client::AsyncCallerContext*> ListTaskDefinitionFamiliesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::ListTaskDefinitionsRequest&, const Model::ListTaskDefinitionsOutcome&, const Aws::Client::AsyncCallerContext*> ListTaskDefinitionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const Aws::Client::AsyncCallerContext*> ListTasksOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::RegisterContainerInstanceRequest&, const Model::RegisterContainerInstanceOutcome&, const Aws::Client::AsyncCallerContext*> RegisterContainerInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::RegisterTaskDefinitionRequest&, const Model::RegisterTaskDefinitionOutcome&, const Aws::Client::AsyncCallerContext*> RegisterTaskDefinitionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::RunTaskRequest&, const Model::RunTaskOutcome&, const Aws::Client::AsyncCallerContext*> RunTaskOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::StartTaskRequest&, const Model::StartTaskOutcome&, const Aws::Client::AsyncCallerContext*> StartTaskOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::StopTaskRequest&, const Model::StopTaskOutcome&, const Aws::Client::AsyncCallerContext*> StopTaskOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::SubmitContainerStateChangeRequest&, const Model::SubmitContainerStateChangeOutcome&, const Aws::Client::AsyncCallerContext*> SubmitContainerStateChangeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::SubmitTaskStateChangeRequest&, const Model::SubmitTaskStateChangeOutcome&, const Aws::Client::AsyncCallerContext*> SubmitTaskStateChangeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::UpdateContainerAgentRequest&, const Model::UpdateContainerAgentOutcome&, const Aws::Client::AsyncCallerContext*> UpdateContainerAgentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ECSClient, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const Aws::Client::AsyncCallerContext*> UpdateServiceOutcomeReceivedEvent;

  /*
    <p></p> <p>Amazon EC2 Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it easy to run, stop, and manage Docker containers on a cluster of Amazon EC2 instances. Amazon ECS lets you launch and stop container-enabled applications with simple API calls, allows you to get the state of your cluster from a centralized service, and gives you access to many familiar Amazon EC2 features like security groups, Amazon EBS volumes, and IAM roles.</p> <p>You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs, isolation policies, and availability requirements. Amazon EC2 Container Service eliminates the need for you to operate your own cluster management and configuration management systems or worry about scaling your management infrastructure.</p>
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
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~ECSClient();

     /*
       <p>Creates a new Amazon ECS cluster. By default, your account will receive a <code>default</code> cluster when you launch your first container instance. However, you can create your own cluster with a unique name with the <code>CreateCluster</code> action.</p>
     */
     Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

     /*
       <p>Creates a new Amazon ECS cluster. By default, your account will receive a <code>default</code> cluster when you launch your first container instance. However, you can create your own cluster with a unique name with the <code>CreateCluster</code> action.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

     /*
       <p>Creates a new Amazon ECS cluster. By default, your account will receive a <code>default</code> cluster when you launch your first container instance. However, you can create your own cluster with a unique name with the <code>CreateCluster</code> action.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateClusterAsync(const Model::CreateClusterRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Runs and maintains a desired number of tasks from a specified task definition. If the number of tasks running in a service drops below <code>desiredCount</code>, Amazon ECS will spawn another instantiation of the task in the specified cluster.</p>
     */
     Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

     /*
       <p>Runs and maintains a desired number of tasks from a specified task definition. If the number of tasks running in a service drops below <code>desiredCount</code>, Amazon ECS will spawn another instantiation of the task in the specified cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request) const;

     /*
       <p>Runs and maintains a desired number of tasks from a specified task definition. If the number of tasks running in a service drops below <code>desiredCount</code>, Amazon ECS will spawn another instantiation of the task in the specified cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateServiceAsync(const Model::CreateServiceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the specified cluster. You must deregister all container instances from this cluster before you may delete it. You can list the container instances in a cluster with <a>ListContainerInstances</a> and deregister them with <a>DeregisterContainerInstance</a>.</p>
     */
     Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

     /*
       <p>Deletes the specified cluster. You must deregister all container instances from this cluster before you may delete it. You can list the container instances in a cluster with <a>ListContainerInstances</a> and deregister them with <a>DeregisterContainerInstance</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

     /*
       <p>Deletes the specified cluster. You must deregister all container instances from this cluster before you may delete it. You can list the container instances in a cluster with <a>ListContainerInstances</a> and deregister them with <a>DeregisterContainerInstance</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes a specified service within a cluster.</p>
     */
     Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

     /*
       <p>Deletes a specified service within a cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request) const;

     /*
       <p>Deletes a specified service within a cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deregisters an Amazon ECS container instance from the specified cluster. This instance will no longer be available to run tasks.</p>
     */
     Model::DeregisterContainerInstanceOutcome DeregisterContainerInstance(const Model::DeregisterContainerInstanceRequest& request) const;

     /*
       <p>Deregisters an Amazon ECS container instance from the specified cluster. This instance will no longer be available to run tasks.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeregisterContainerInstanceOutcomeCallable DeregisterContainerInstanceCallable(const Model::DeregisterContainerInstanceRequest& request) const;

     /*
       <p>Deregisters an Amazon ECS container instance from the specified cluster. This instance will no longer be available to run tasks.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeregisterContainerInstanceAsync(const Model::DeregisterContainerInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deregisters the specified task definition by family and revision. Upon deregistration, the task definition is marked as <code>INACTIVE</code>. Existing tasks and services that reference an <code>INACTIVE</code> task definition continue to run without disruption. Existing services that reference an <code>INACTIVE</code> task definition can still scale up or down by modifying the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task definition to run new tasks or create new services, and you cannot update an existing service to reference an <code>INACTIVE</code> task definition (although there may be up to a 10 minute window following deregistration where these restrictions have not yet taken effect).</p>
     */
     Model::DeregisterTaskDefinitionOutcome DeregisterTaskDefinition(const Model::DeregisterTaskDefinitionRequest& request) const;

     /*
       <p>Deregisters the specified task definition by family and revision. Upon deregistration, the task definition is marked as <code>INACTIVE</code>. Existing tasks and services that reference an <code>INACTIVE</code> task definition continue to run without disruption. Existing services that reference an <code>INACTIVE</code> task definition can still scale up or down by modifying the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task definition to run new tasks or create new services, and you cannot update an existing service to reference an <code>INACTIVE</code> task definition (although there may be up to a 10 minute window following deregistration where these restrictions have not yet taken effect).</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeregisterTaskDefinitionOutcomeCallable DeregisterTaskDefinitionCallable(const Model::DeregisterTaskDefinitionRequest& request) const;

     /*
       <p>Deregisters the specified task definition by family and revision. Upon deregistration, the task definition is marked as <code>INACTIVE</code>. Existing tasks and services that reference an <code>INACTIVE</code> task definition continue to run without disruption. Existing services that reference an <code>INACTIVE</code> task definition can still scale up or down by modifying the service's desired count.</p> <p>You cannot use an <code>INACTIVE</code> task definition to run new tasks or create new services, and you cannot update an existing service to reference an <code>INACTIVE</code> task definition (although there may be up to a 10 minute window following deregistration where these restrictions have not yet taken effect).</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeregisterTaskDefinitionAsync(const Model::DeregisterTaskDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Describes one or more of your clusters.</p>
     */
     Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

     /*
       <p>Describes one or more of your clusters.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

     /*
       <p>Describes one or more of your clusters.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Describes Amazon EC2 Container Service container instances. Returns metadata about registered and remaining resources on each container instance requested.</p>
     */
     Model::DescribeContainerInstancesOutcome DescribeContainerInstances(const Model::DescribeContainerInstancesRequest& request) const;

     /*
       <p>Describes Amazon EC2 Container Service container instances. Returns metadata about registered and remaining resources on each container instance requested.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeContainerInstancesOutcomeCallable DescribeContainerInstancesCallable(const Model::DescribeContainerInstancesRequest& request) const;

     /*
       <p>Describes Amazon EC2 Container Service container instances. Returns metadata about registered and remaining resources on each container instance requested.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeContainerInstancesAsync(const Model::DescribeContainerInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Describes the specified services running in your cluster.</p>
     */
     Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;

     /*
       <p>Describes the specified services running in your cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request) const;

     /*
       <p>Describes the specified services running in your cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeServicesAsync(const Model::DescribeServicesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Describes a task definition. You can specify a <code>family</code> and <code>revision</code> to find information on a specific task definition, or you can simply specify the family to find the latest <code>ACTIVE</code> revision in that family.</p> <note> <p>You can only describe <code>INACTIVE</code> task definitions while an active task or service references them.</p> </note>
     */
     Model::DescribeTaskDefinitionOutcome DescribeTaskDefinition(const Model::DescribeTaskDefinitionRequest& request) const;

     /*
       <p>Describes a task definition. You can specify a <code>family</code> and <code>revision</code> to find information on a specific task definition, or you can simply specify the family to find the latest <code>ACTIVE</code> revision in that family.</p> <note> <p>You can only describe <code>INACTIVE</code> task definitions while an active task or service references them.</p> </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeTaskDefinitionOutcomeCallable DescribeTaskDefinitionCallable(const Model::DescribeTaskDefinitionRequest& request) const;

     /*
       <p>Describes a task definition. You can specify a <code>family</code> and <code>revision</code> to find information on a specific task definition, or you can simply specify the family to find the latest <code>ACTIVE</code> revision in that family.</p> <note> <p>You can only describe <code>INACTIVE</code> task definitions while an active task or service references them.</p> </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeTaskDefinitionAsync(const Model::DescribeTaskDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Describes a specified task or tasks.</p>
     */
     Model::DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest& request) const;

     /*
       <p>Describes a specified task or tasks.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request) const;

     /*
       <p>Describes a specified task or tasks.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Returns an endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>
     */
     Model::DiscoverPollEndpointOutcome DiscoverPollEndpoint(const Model::DiscoverPollEndpointRequest& request) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Returns an endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DiscoverPollEndpointOutcomeCallable DiscoverPollEndpointCallable(const Model::DiscoverPollEndpointRequest& request) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Returns an endpoint for the Amazon EC2 Container Service agent to poll for updates.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DiscoverPollEndpointAsync(const Model::DiscoverPollEndpointRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of existing clusters.</p>
     */
     Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

     /*
       <p>Returns a list of existing clusters.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

     /*
       <p>Returns a list of existing clusters.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListClustersAsync(const Model::ListClustersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of container instances in a specified cluster.</p>
     */
     Model::ListContainerInstancesOutcome ListContainerInstances(const Model::ListContainerInstancesRequest& request) const;

     /*
       <p>Returns a list of container instances in a specified cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListContainerInstancesOutcomeCallable ListContainerInstancesCallable(const Model::ListContainerInstancesRequest& request) const;

     /*
       <p>Returns a list of container instances in a specified cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListContainerInstancesAsync(const Model::ListContainerInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the services that are running in a specified cluster.</p>
     */
     Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

     /*
       <p>Lists the services that are running in a specified cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

     /*
       <p>Lists the services that are running in a specified cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListServicesAsync(const Model::ListServicesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of task definition families that are registered to your account (which may include task definition families that no longer have any <code>ACTIVE</code> task definitions). You can filter the results with the <code>familyPrefix</code> parameter.</p>
     */
     Model::ListTaskDefinitionFamiliesOutcome ListTaskDefinitionFamilies(const Model::ListTaskDefinitionFamiliesRequest& request) const;

     /*
       <p>Returns a list of task definition families that are registered to your account (which may include task definition families that no longer have any <code>ACTIVE</code> task definitions). You can filter the results with the <code>familyPrefix</code> parameter.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListTaskDefinitionFamiliesOutcomeCallable ListTaskDefinitionFamiliesCallable(const Model::ListTaskDefinitionFamiliesRequest& request) const;

     /*
       <p>Returns a list of task definition families that are registered to your account (which may include task definition families that no longer have any <code>ACTIVE</code> task definitions). You can filter the results with the <code>familyPrefix</code> parameter.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListTaskDefinitionFamiliesAsync(const Model::ListTaskDefinitionFamiliesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of task definitions that are registered to your account. You can filter the results by family name with the <code>familyPrefix</code> parameter or by status with the <code>status</code> parameter.</p>
     */
     Model::ListTaskDefinitionsOutcome ListTaskDefinitions(const Model::ListTaskDefinitionsRequest& request) const;

     /*
       <p>Returns a list of task definitions that are registered to your account. You can filter the results by family name with the <code>familyPrefix</code> parameter or by status with the <code>status</code> parameter.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListTaskDefinitionsOutcomeCallable ListTaskDefinitionsCallable(const Model::ListTaskDefinitionsRequest& request) const;

     /*
       <p>Returns a list of task definitions that are registered to your account. You can filter the results by family name with the <code>familyPrefix</code> parameter or by status with the <code>status</code> parameter.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListTaskDefinitionsAsync(const Model::ListTaskDefinitionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of tasks for a specified cluster. You can filter the results by family name, by a particular container instance, or by the desired status of the task with the <code>family</code>, <code>containerInstance</code>, and <code>desiredStatus</code> parameters.</p>
     */
     Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

     /*
       <p>Returns a list of tasks for a specified cluster. You can filter the results by family name, by a particular container instance, or by the desired status of the task with the <code>family</code>, <code>containerInstance</code>, and <code>desiredStatus</code> parameters.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListTasksOutcomeCallable ListTasksCallable(const Model::ListTasksRequest& request) const;

     /*
       <p>Returns a list of tasks for a specified cluster. You can filter the results by family name, by a particular container instance, or by the desired status of the task with the <code>family</code>, <code>containerInstance</code>, and <code>desiredStatus</code> parameters.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListTasksAsync(const Model::ListTasksRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Registers an Amazon EC2 instance into the specified cluster. This instance will become available to place containers on.</p>
     */
     Model::RegisterContainerInstanceOutcome RegisterContainerInstance(const Model::RegisterContainerInstanceRequest& request) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Registers an Amazon EC2 instance into the specified cluster. This instance will become available to place containers on.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterContainerInstanceOutcomeCallable RegisterContainerInstanceCallable(const Model::RegisterContainerInstanceRequest& request) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Registers an Amazon EC2 instance into the specified cluster. This instance will become available to place containers on.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterContainerInstanceAsync(const Model::RegisterContainerInstanceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Registers a new task definition from the supplied <code>family</code> and <code>containerDefinitions</code>. Optionally, you can add data volumes to your containers with the <code>volumes</code> parameter. For more information on task definition parameters and defaults, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
     Model::RegisterTaskDefinitionOutcome RegisterTaskDefinition(const Model::RegisterTaskDefinitionRequest& request) const;

     /*
       <p>Registers a new task definition from the supplied <code>family</code> and <code>containerDefinitions</code>. Optionally, you can add data volumes to your containers with the <code>volumes</code> parameter. For more information on task definition parameters and defaults, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterTaskDefinitionOutcomeCallable RegisterTaskDefinitionCallable(const Model::RegisterTaskDefinitionRequest& request) const;

     /*
       <p>Registers a new task definition from the supplied <code>family</code> and <code>containerDefinitions</code>. Optionally, you can add data volumes to your containers with the <code>volumes</code> parameter. For more information on task definition parameters and defaults, see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterTaskDefinitionAsync(const Model::RegisterTaskDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Start a task using random placement and the default Amazon ECS scheduler. If you want to use your own scheduler or place a task on a specific container instance, use <code>StartTask</code> instead.</p> <important> <p>The <code>count</code> parameter is limited to 10 tasks per call.</p> </important>
     */
     Model::RunTaskOutcome RunTask(const Model::RunTaskRequest& request) const;

     /*
       <p>Start a task using random placement and the default Amazon ECS scheduler. If you want to use your own scheduler or place a task on a specific container instance, use <code>StartTask</code> instead.</p> <important> <p>The <code>count</code> parameter is limited to 10 tasks per call.</p> </important>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RunTaskOutcomeCallable RunTaskCallable(const Model::RunTaskRequest& request) const;

     /*
       <p>Start a task using random placement and the default Amazon ECS scheduler. If you want to use your own scheduler or place a task on a specific container instance, use <code>StartTask</code> instead.</p> <important> <p>The <code>count</code> parameter is limited to 10 tasks per call.</p> </important>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RunTaskAsync(const Model::RunTaskRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Starts a new task from the specified task definition on the specified container instance or instances. If you want to use the default Amazon ECS scheduler to place your task, use <code>RunTask</code> instead.</p> <important> <p>The list of container instances to start tasks on is limited to 10.</p> </important>
     */
     Model::StartTaskOutcome StartTask(const Model::StartTaskRequest& request) const;

     /*
       <p>Starts a new task from the specified task definition on the specified container instance or instances. If you want to use the default Amazon ECS scheduler to place your task, use <code>RunTask</code> instead.</p> <important> <p>The list of container instances to start tasks on is limited to 10.</p> </important>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::StartTaskOutcomeCallable StartTaskCallable(const Model::StartTaskRequest& request) const;

     /*
       <p>Starts a new task from the specified task definition on the specified container instance or instances. If you want to use the default Amazon ECS scheduler to place your task, use <code>RunTask</code> instead.</p> <important> <p>The list of container instances to start tasks on is limited to 10.</p> </important>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void StartTaskAsync(const Model::StartTaskRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Stops a running task.</p>
     */
     Model::StopTaskOutcome StopTask(const Model::StopTaskRequest& request) const;

     /*
       <p>Stops a running task.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::StopTaskOutcomeCallable StopTaskCallable(const Model::StopTaskRequest& request) const;

     /*
       <p>Stops a running task.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void StopTaskAsync(const Model::StopTaskRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a container changed states.</p>
     */
     Model::SubmitContainerStateChangeOutcome SubmitContainerStateChange(const Model::SubmitContainerStateChangeRequest& request) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a container changed states.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SubmitContainerStateChangeOutcomeCallable SubmitContainerStateChangeCallable(const Model::SubmitContainerStateChangeRequest& request) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a container changed states.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SubmitContainerStateChangeAsync(const Model::SubmitContainerStateChangeRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a task changed states.</p>
     */
     Model::SubmitTaskStateChangeOutcome SubmitTaskStateChange(const Model::SubmitTaskStateChangeRequest& request) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a task changed states.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SubmitTaskStateChangeOutcomeCallable SubmitTaskStateChangeCallable(const Model::SubmitTaskStateChangeRequest& request) const;

     /*
       <note><p>This action is only used by the Amazon EC2 Container Service agent, and it is not intended for use outside of the agent.</p></note> <p>Sent to acknowledge that a task changed states.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SubmitTaskStateChangeAsync(const Model::SubmitTaskStateChangeRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Updates the Amazon ECS container agent on a specified container instance.</p>
     */
     Model::UpdateContainerAgentOutcome UpdateContainerAgent(const Model::UpdateContainerAgentRequest& request) const;

     /*
       <p>Updates the Amazon ECS container agent on a specified container instance.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateContainerAgentOutcomeCallable UpdateContainerAgentCallable(const Model::UpdateContainerAgentRequest& request) const;

     /*
       <p>Updates the Amazon ECS container agent on a specified container instance.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateContainerAgentAsync(const Model::UpdateContainerAgentRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Modify the desired count or task definition used in a service.</p> <p>You can add to or subtract from the number of instantiations of a task definition in a service by specifying the cluster that the service is running in and a new <code>desiredCount</code> parameter.</p> <p>You can use <code>UpdateService</code> to modify your task definition and deploy a new version of your service, one task at a time. If you modify the task definition with <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the task definition and then stops an old task after the new version is running. Because <code>UpdateService</code> starts a new version of the task before stopping an old version, your cluster must have capacity to support one more instantiation of the task when <code>UpdateService</code> is run. If your cluster cannot support another instantiation of the task used in your service, you can reduce the desired count of your service by one before modifying the task definition.</p>
     */
     Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

     /*
       <p>Modify the desired count or task definition used in a service.</p> <p>You can add to or subtract from the number of instantiations of a task definition in a service by specifying the cluster that the service is running in and a new <code>desiredCount</code> parameter.</p> <p>You can use <code>UpdateService</code> to modify your task definition and deploy a new version of your service, one task at a time. If you modify the task definition with <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the task definition and then stops an old task after the new version is running. Because <code>UpdateService</code> starts a new version of the task before stopping an old version, your cluster must have capacity to support one more instantiation of the task when <code>UpdateService</code> is run. If your cluster cannot support another instantiation of the task used in your service, you can reduce the desired count of your service by one before modifying the task definition.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request) const;

     /*
       <p>Modify the desired count or task definition used in a service.</p> <p>You can add to or subtract from the number of instantiations of a task definition in a service by specifying the cluster that the service is running in and a new <code>desiredCount</code> parameter.</p> <p>You can use <code>UpdateService</code> to modify your task definition and deploy a new version of your service, one task at a time. If you modify the task definition with <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the task definition and then stops an old task after the new version is running. Because <code>UpdateService</code> starts a new version of the task before stopping an old version, your cluster must have capacity to support one more instantiation of the task when <code>UpdateService</code> is run. If your cluster cannot support another instantiation of the task used in your service, you can reduce the desired count of your service by one before modifying the task definition.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for CreateClusterAsync to call upon completion to the handler chain. You need to call this to
    * use CreateClusterAsync.
    */
    inline void RegisterCreateClusterOutcomeReceivedHandler(const CreateClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateCluster.
    */
    inline void ClearAllCreateClusterOutcomeReceivedHandlers()
    {
      m_onCreateClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateServiceAsync to call upon completion to the handler chain. You need to call this to
    * use CreateServiceAsync.
    */
    inline void RegisterCreateServiceOutcomeReceivedHandler(const CreateServiceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateServiceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateService.
    */
    inline void ClearAllCreateServiceOutcomeReceivedHandlers()
    {
      m_onCreateServiceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteClusterAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteClusterAsync.
    */
    inline void RegisterDeleteClusterOutcomeReceivedHandler(const DeleteClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteCluster.
    */
    inline void ClearAllDeleteClusterOutcomeReceivedHandlers()
    {
      m_onDeleteClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteServiceAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteServiceAsync.
    */
    inline void RegisterDeleteServiceOutcomeReceivedHandler(const DeleteServiceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteServiceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteService.
    */
    inline void ClearAllDeleteServiceOutcomeReceivedHandlers()
    {
      m_onDeleteServiceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeregisterContainerInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use DeregisterContainerInstanceAsync.
    */
    inline void RegisterDeregisterContainerInstanceOutcomeReceivedHandler(const DeregisterContainerInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeregisterContainerInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeregisterContainerInstance.
    */
    inline void ClearAllDeregisterContainerInstanceOutcomeReceivedHandlers()
    {
      m_onDeregisterContainerInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeregisterTaskDefinitionAsync to call upon completion to the handler chain. You need to call this to
    * use DeregisterTaskDefinitionAsync.
    */
    inline void RegisterDeregisterTaskDefinitionOutcomeReceivedHandler(const DeregisterTaskDefinitionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeregisterTaskDefinitionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeregisterTaskDefinition.
    */
    inline void ClearAllDeregisterTaskDefinitionOutcomeReceivedHandlers()
    {
      m_onDeregisterTaskDefinitionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClustersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClustersAsync.
    */
    inline void RegisterDescribeClustersOutcomeReceivedHandler(const DescribeClustersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClustersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeClusters.
    */
    inline void ClearAllDescribeClustersOutcomeReceivedHandlers()
    {
      m_onDescribeClustersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeContainerInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeContainerInstancesAsync.
    */
    inline void RegisterDescribeContainerInstancesOutcomeReceivedHandler(const DescribeContainerInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeContainerInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeContainerInstances.
    */
    inline void ClearAllDescribeContainerInstancesOutcomeReceivedHandlers()
    {
      m_onDescribeContainerInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeServicesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeServicesAsync.
    */
    inline void RegisterDescribeServicesOutcomeReceivedHandler(const DescribeServicesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeServicesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeServices.
    */
    inline void ClearAllDescribeServicesOutcomeReceivedHandlers()
    {
      m_onDescribeServicesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeTaskDefinitionAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeTaskDefinitionAsync.
    */
    inline void RegisterDescribeTaskDefinitionOutcomeReceivedHandler(const DescribeTaskDefinitionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeTaskDefinitionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeTaskDefinition.
    */
    inline void ClearAllDescribeTaskDefinitionOutcomeReceivedHandlers()
    {
      m_onDescribeTaskDefinitionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeTasksAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeTasksAsync.
    */
    inline void RegisterDescribeTasksOutcomeReceivedHandler(const DescribeTasksOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeTasksOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeTasks.
    */
    inline void ClearAllDescribeTasksOutcomeReceivedHandlers()
    {
      m_onDescribeTasksOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DiscoverPollEndpointAsync to call upon completion to the handler chain. You need to call this to
    * use DiscoverPollEndpointAsync.
    */
    inline void RegisterDiscoverPollEndpointOutcomeReceivedHandler(const DiscoverPollEndpointOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDiscoverPollEndpointOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DiscoverPollEndpoint.
    */
    inline void ClearAllDiscoverPollEndpointOutcomeReceivedHandlers()
    {
      m_onDiscoverPollEndpointOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListClustersAsync to call upon completion to the handler chain. You need to call this to
    * use ListClustersAsync.
    */
    inline void RegisterListClustersOutcomeReceivedHandler(const ListClustersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListClustersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListClusters.
    */
    inline void ClearAllListClustersOutcomeReceivedHandlers()
    {
      m_onListClustersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListContainerInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use ListContainerInstancesAsync.
    */
    inline void RegisterListContainerInstancesOutcomeReceivedHandler(const ListContainerInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListContainerInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListContainerInstances.
    */
    inline void ClearAllListContainerInstancesOutcomeReceivedHandlers()
    {
      m_onListContainerInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListServicesAsync to call upon completion to the handler chain. You need to call this to
    * use ListServicesAsync.
    */
    inline void RegisterListServicesOutcomeReceivedHandler(const ListServicesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListServicesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListServices.
    */
    inline void ClearAllListServicesOutcomeReceivedHandlers()
    {
      m_onListServicesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListTaskDefinitionFamiliesAsync to call upon completion to the handler chain. You need to call this to
    * use ListTaskDefinitionFamiliesAsync.
    */
    inline void RegisterListTaskDefinitionFamiliesOutcomeReceivedHandler(const ListTaskDefinitionFamiliesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListTaskDefinitionFamiliesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListTaskDefinitionFamilies.
    */
    inline void ClearAllListTaskDefinitionFamiliesOutcomeReceivedHandlers()
    {
      m_onListTaskDefinitionFamiliesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListTaskDefinitionsAsync to call upon completion to the handler chain. You need to call this to
    * use ListTaskDefinitionsAsync.
    */
    inline void RegisterListTaskDefinitionsOutcomeReceivedHandler(const ListTaskDefinitionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListTaskDefinitionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListTaskDefinitions.
    */
    inline void ClearAllListTaskDefinitionsOutcomeReceivedHandlers()
    {
      m_onListTaskDefinitionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListTasksAsync to call upon completion to the handler chain. You need to call this to
    * use ListTasksAsync.
    */
    inline void RegisterListTasksOutcomeReceivedHandler(const ListTasksOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListTasksOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListTasks.
    */
    inline void ClearAllListTasksOutcomeReceivedHandlers()
    {
      m_onListTasksOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterContainerInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterContainerInstanceAsync.
    */
    inline void RegisterRegisterContainerInstanceOutcomeReceivedHandler(const RegisterContainerInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterContainerInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterContainerInstance.
    */
    inline void ClearAllRegisterContainerInstanceOutcomeReceivedHandlers()
    {
      m_onRegisterContainerInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterTaskDefinitionAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterTaskDefinitionAsync.
    */
    inline void RegisterRegisterTaskDefinitionOutcomeReceivedHandler(const RegisterTaskDefinitionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterTaskDefinitionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterTaskDefinition.
    */
    inline void ClearAllRegisterTaskDefinitionOutcomeReceivedHandlers()
    {
      m_onRegisterTaskDefinitionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RunTaskAsync to call upon completion to the handler chain. You need to call this to
    * use RunTaskAsync.
    */
    inline void RegisterRunTaskOutcomeReceivedHandler(const RunTaskOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRunTaskOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RunTask.
    */
    inline void ClearAllRunTaskOutcomeReceivedHandlers()
    {
      m_onRunTaskOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for StartTaskAsync to call upon completion to the handler chain. You need to call this to
    * use StartTaskAsync.
    */
    inline void RegisterStartTaskOutcomeReceivedHandler(const StartTaskOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onStartTaskOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for StartTask.
    */
    inline void ClearAllStartTaskOutcomeReceivedHandlers()
    {
      m_onStartTaskOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for StopTaskAsync to call upon completion to the handler chain. You need to call this to
    * use StopTaskAsync.
    */
    inline void RegisterStopTaskOutcomeReceivedHandler(const StopTaskOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onStopTaskOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for StopTask.
    */
    inline void ClearAllStopTaskOutcomeReceivedHandlers()
    {
      m_onStopTaskOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SubmitContainerStateChangeAsync to call upon completion to the handler chain. You need to call this to
    * use SubmitContainerStateChangeAsync.
    */
    inline void RegisterSubmitContainerStateChangeOutcomeReceivedHandler(const SubmitContainerStateChangeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSubmitContainerStateChangeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SubmitContainerStateChange.
    */
    inline void ClearAllSubmitContainerStateChangeOutcomeReceivedHandlers()
    {
      m_onSubmitContainerStateChangeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SubmitTaskStateChangeAsync to call upon completion to the handler chain. You need to call this to
    * use SubmitTaskStateChangeAsync.
    */
    inline void RegisterSubmitTaskStateChangeOutcomeReceivedHandler(const SubmitTaskStateChangeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSubmitTaskStateChangeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SubmitTaskStateChange.
    */
    inline void ClearAllSubmitTaskStateChangeOutcomeReceivedHandlers()
    {
      m_onSubmitTaskStateChangeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateContainerAgentAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateContainerAgentAsync.
    */
    inline void RegisterUpdateContainerAgentOutcomeReceivedHandler(const UpdateContainerAgentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateContainerAgentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateContainerAgent.
    */
    inline void ClearAllUpdateContainerAgentOutcomeReceivedHandlers()
    {
      m_onUpdateContainerAgentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateServiceAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateServiceAsync.
    */
    inline void RegisterUpdateServiceOutcomeReceivedHandler(const UpdateServiceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateServiceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateService.
    */
    inline void ClearAllUpdateServiceOutcomeReceivedHandlers()
    {
      m_onUpdateServiceOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateServiceAsyncHelper(const Model::CreateServiceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteServiceAsyncHelper(const Model::DeleteServiceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeregisterContainerInstanceAsyncHelper(const Model::DeregisterContainerInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeregisterTaskDefinitionAsyncHelper(const Model::DeregisterTaskDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClustersAsyncHelper(const Model::DescribeClustersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeContainerInstancesAsyncHelper(const Model::DescribeContainerInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeServicesAsyncHelper(const Model::DescribeServicesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeTaskDefinitionAsyncHelper(const Model::DescribeTaskDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeTasksAsyncHelper(const Model::DescribeTasksRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DiscoverPollEndpointAsyncHelper(const Model::DiscoverPollEndpointRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListContainerInstancesAsyncHelper(const Model::ListContainerInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListServicesAsyncHelper(const Model::ListServicesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListTaskDefinitionFamiliesAsyncHelper(const Model::ListTaskDefinitionFamiliesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListTaskDefinitionsAsyncHelper(const Model::ListTaskDefinitionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListTasksAsyncHelper(const Model::ListTasksRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RegisterContainerInstanceAsyncHelper(const Model::RegisterContainerInstanceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RegisterTaskDefinitionAsyncHelper(const Model::RegisterTaskDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RunTaskAsyncHelper(const Model::RunTaskRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void StartTaskAsyncHelper(const Model::StartTaskRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void StopTaskAsyncHelper(const Model::StopTaskRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SubmitContainerStateChangeAsyncHelper(const Model::SubmitContainerStateChangeRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SubmitTaskStateChangeAsyncHelper(const Model::SubmitTaskStateChangeRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateContainerAgentAsyncHelper(const Model::UpdateContainerAgentRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateServiceAsyncHelper(const Model::UpdateServiceRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    CreateClusterOutcomeReceivedEvent m_onCreateClusterOutcomeReceived;
    CreateServiceOutcomeReceivedEvent m_onCreateServiceOutcomeReceived;
    DeleteClusterOutcomeReceivedEvent m_onDeleteClusterOutcomeReceived;
    DeleteServiceOutcomeReceivedEvent m_onDeleteServiceOutcomeReceived;
    DeregisterContainerInstanceOutcomeReceivedEvent m_onDeregisterContainerInstanceOutcomeReceived;
    DeregisterTaskDefinitionOutcomeReceivedEvent m_onDeregisterTaskDefinitionOutcomeReceived;
    DescribeClustersOutcomeReceivedEvent m_onDescribeClustersOutcomeReceived;
    DescribeContainerInstancesOutcomeReceivedEvent m_onDescribeContainerInstancesOutcomeReceived;
    DescribeServicesOutcomeReceivedEvent m_onDescribeServicesOutcomeReceived;
    DescribeTaskDefinitionOutcomeReceivedEvent m_onDescribeTaskDefinitionOutcomeReceived;
    DescribeTasksOutcomeReceivedEvent m_onDescribeTasksOutcomeReceived;
    DiscoverPollEndpointOutcomeReceivedEvent m_onDiscoverPollEndpointOutcomeReceived;
    ListClustersOutcomeReceivedEvent m_onListClustersOutcomeReceived;
    ListContainerInstancesOutcomeReceivedEvent m_onListContainerInstancesOutcomeReceived;
    ListServicesOutcomeReceivedEvent m_onListServicesOutcomeReceived;
    ListTaskDefinitionFamiliesOutcomeReceivedEvent m_onListTaskDefinitionFamiliesOutcomeReceived;
    ListTaskDefinitionsOutcomeReceivedEvent m_onListTaskDefinitionsOutcomeReceived;
    ListTasksOutcomeReceivedEvent m_onListTasksOutcomeReceived;
    RegisterContainerInstanceOutcomeReceivedEvent m_onRegisterContainerInstanceOutcomeReceived;
    RegisterTaskDefinitionOutcomeReceivedEvent m_onRegisterTaskDefinitionOutcomeReceived;
    RunTaskOutcomeReceivedEvent m_onRunTaskOutcomeReceived;
    StartTaskOutcomeReceivedEvent m_onStartTaskOutcomeReceived;
    StopTaskOutcomeReceivedEvent m_onStopTaskOutcomeReceived;
    SubmitContainerStateChangeOutcomeReceivedEvent m_onSubmitContainerStateChangeOutcomeReceived;
    SubmitTaskStateChangeOutcomeReceivedEvent m_onSubmitTaskStateChangeOutcomeReceived;
    UpdateContainerAgentOutcomeReceivedEvent m_onUpdateContainerAgentOutcomeReceived;
    UpdateServiceOutcomeReceivedEvent m_onUpdateServiceOutcomeReceived;
  };

} // namespace ECS
} // namespace Aws
