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
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/ecs/ECSClient.h>
#include <aws/ecs/ECSEndpoint.h>
#include <aws/ecs/ECSErrorMarshaller.h>
#include <aws/ecs/model/CreateClusterRequest.h>
#include <aws/ecs/model/CreateServiceRequest.h>
#include <aws/ecs/model/DeleteClusterRequest.h>
#include <aws/ecs/model/DeleteServiceRequest.h>
#include <aws/ecs/model/DeregisterContainerInstanceRequest.h>
#include <aws/ecs/model/DeregisterTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeClustersRequest.h>
#include <aws/ecs/model/DescribeContainerInstancesRequest.h>
#include <aws/ecs/model/DescribeServicesRequest.h>
#include <aws/ecs/model/DescribeTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeTasksRequest.h>
#include <aws/ecs/model/DiscoverPollEndpointRequest.h>
#include <aws/ecs/model/ListClustersRequest.h>
#include <aws/ecs/model/ListContainerInstancesRequest.h>
#include <aws/ecs/model/ListServicesRequest.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesRequest.h>
#include <aws/ecs/model/ListTaskDefinitionsRequest.h>
#include <aws/ecs/model/ListTasksRequest.h>
#include <aws/ecs/model/RegisterContainerInstanceRequest.h>
#include <aws/ecs/model/RegisterTaskDefinitionRequest.h>
#include <aws/ecs/model/RunTaskRequest.h>
#include <aws/ecs/model/StartTaskRequest.h>
#include <aws/ecs/model/StopTaskRequest.h>
#include <aws/ecs/model/SubmitContainerStateChangeRequest.h>
#include <aws/ecs/model/SubmitTaskStateChangeRequest.h>
#include <aws/ecs/model/UpdateContainerAgentRequest.h>
#include <aws/ecs/model/UpdateServiceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ECS;
using namespace Aws::ECS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ecs";
static const char* ALLOCATION_TAG = "ECSClient";

ECSClient::ECSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECSClient::ECSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECSClient::ECSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECSClient::~ECSClient()
{
}

void ECSClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ECSEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateClusterOutcome ECSClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateClusterOutcome(CreateClusterResult(outcome.GetResult()));
  }
  else
  {
    return CreateClusterOutcome(outcome.GetError());
  }
}

CreateClusterOutcomeCallable ECSClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::CreateCluster, this, request);
}

void ECSClient::CreateClusterAsync(const CreateClusterRequest& request) const
{
  m_executor->Submit(&ECSClient::CreateClusterAsyncHelper, this, request);
}

void ECSClient::CreateClusterAsyncHelper(const CreateClusterRequest& request) const
{
  m_onCreateClusterOutcomeReceived(this, request, CreateCluster(request));
}

CreateServiceOutcome ECSClient::CreateService(const CreateServiceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateServiceOutcome(CreateServiceResult(outcome.GetResult()));
  }
  else
  {
    return CreateServiceOutcome(outcome.GetError());
  }
}

CreateServiceOutcomeCallable ECSClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::CreateService, this, request);
}

void ECSClient::CreateServiceAsync(const CreateServiceRequest& request) const
{
  m_executor->Submit(&ECSClient::CreateServiceAsyncHelper, this, request);
}

void ECSClient::CreateServiceAsyncHelper(const CreateServiceRequest& request) const
{
  m_onCreateServiceOutcomeReceived(this, request, CreateService(request));
}

DeleteClusterOutcome ECSClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteClusterOutcome(DeleteClusterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteClusterOutcome(outcome.GetError());
  }
}

DeleteClusterOutcomeCallable ECSClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DeleteCluster, this, request);
}

void ECSClient::DeleteClusterAsync(const DeleteClusterRequest& request) const
{
  m_executor->Submit(&ECSClient::DeleteClusterAsyncHelper, this, request);
}

void ECSClient::DeleteClusterAsyncHelper(const DeleteClusterRequest& request) const
{
  m_onDeleteClusterOutcomeReceived(this, request, DeleteCluster(request));
}

DeleteServiceOutcome ECSClient::DeleteService(const DeleteServiceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteServiceOutcome(DeleteServiceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteServiceOutcome(outcome.GetError());
  }
}

DeleteServiceOutcomeCallable ECSClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DeleteService, this, request);
}

void ECSClient::DeleteServiceAsync(const DeleteServiceRequest& request) const
{
  m_executor->Submit(&ECSClient::DeleteServiceAsyncHelper, this, request);
}

void ECSClient::DeleteServiceAsyncHelper(const DeleteServiceRequest& request) const
{
  m_onDeleteServiceOutcomeReceived(this, request, DeleteService(request));
}

DeregisterContainerInstanceOutcome ECSClient::DeregisterContainerInstance(const DeregisterContainerInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterContainerInstanceOutcome(DeregisterContainerInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterContainerInstanceOutcome(outcome.GetError());
  }
}

DeregisterContainerInstanceOutcomeCallable ECSClient::DeregisterContainerInstanceCallable(const DeregisterContainerInstanceRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DeregisterContainerInstance, this, request);
}

void ECSClient::DeregisterContainerInstanceAsync(const DeregisterContainerInstanceRequest& request) const
{
  m_executor->Submit(&ECSClient::DeregisterContainerInstanceAsyncHelper, this, request);
}

void ECSClient::DeregisterContainerInstanceAsyncHelper(const DeregisterContainerInstanceRequest& request) const
{
  m_onDeregisterContainerInstanceOutcomeReceived(this, request, DeregisterContainerInstance(request));
}

DeregisterTaskDefinitionOutcome ECSClient::DeregisterTaskDefinition(const DeregisterTaskDefinitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterTaskDefinitionOutcome(DeregisterTaskDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterTaskDefinitionOutcome(outcome.GetError());
  }
}

DeregisterTaskDefinitionOutcomeCallable ECSClient::DeregisterTaskDefinitionCallable(const DeregisterTaskDefinitionRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DeregisterTaskDefinition, this, request);
}

void ECSClient::DeregisterTaskDefinitionAsync(const DeregisterTaskDefinitionRequest& request) const
{
  m_executor->Submit(&ECSClient::DeregisterTaskDefinitionAsyncHelper, this, request);
}

void ECSClient::DeregisterTaskDefinitionAsyncHelper(const DeregisterTaskDefinitionRequest& request) const
{
  m_onDeregisterTaskDefinitionOutcomeReceived(this, request, DeregisterTaskDefinition(request));
}

DescribeClustersOutcome ECSClient::DescribeClusters(const DescribeClustersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClustersOutcome(DescribeClustersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClustersOutcome(outcome.GetError());
  }
}

DescribeClustersOutcomeCallable ECSClient::DescribeClustersCallable(const DescribeClustersRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DescribeClusters, this, request);
}

void ECSClient::DescribeClustersAsync(const DescribeClustersRequest& request) const
{
  m_executor->Submit(&ECSClient::DescribeClustersAsyncHelper, this, request);
}

void ECSClient::DescribeClustersAsyncHelper(const DescribeClustersRequest& request) const
{
  m_onDescribeClustersOutcomeReceived(this, request, DescribeClusters(request));
}

DescribeContainerInstancesOutcome ECSClient::DescribeContainerInstances(const DescribeContainerInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeContainerInstancesOutcome(DescribeContainerInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeContainerInstancesOutcome(outcome.GetError());
  }
}

DescribeContainerInstancesOutcomeCallable ECSClient::DescribeContainerInstancesCallable(const DescribeContainerInstancesRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DescribeContainerInstances, this, request);
}

void ECSClient::DescribeContainerInstancesAsync(const DescribeContainerInstancesRequest& request) const
{
  m_executor->Submit(&ECSClient::DescribeContainerInstancesAsyncHelper, this, request);
}

void ECSClient::DescribeContainerInstancesAsyncHelper(const DescribeContainerInstancesRequest& request) const
{
  m_onDescribeContainerInstancesOutcomeReceived(this, request, DescribeContainerInstances(request));
}

DescribeServicesOutcome ECSClient::DescribeServices(const DescribeServicesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeServicesOutcome(DescribeServicesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeServicesOutcome(outcome.GetError());
  }
}

DescribeServicesOutcomeCallable ECSClient::DescribeServicesCallable(const DescribeServicesRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DescribeServices, this, request);
}

void ECSClient::DescribeServicesAsync(const DescribeServicesRequest& request) const
{
  m_executor->Submit(&ECSClient::DescribeServicesAsyncHelper, this, request);
}

void ECSClient::DescribeServicesAsyncHelper(const DescribeServicesRequest& request) const
{
  m_onDescribeServicesOutcomeReceived(this, request, DescribeServices(request));
}

DescribeTaskDefinitionOutcome ECSClient::DescribeTaskDefinition(const DescribeTaskDefinitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTaskDefinitionOutcome(DescribeTaskDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTaskDefinitionOutcome(outcome.GetError());
  }
}

DescribeTaskDefinitionOutcomeCallable ECSClient::DescribeTaskDefinitionCallable(const DescribeTaskDefinitionRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DescribeTaskDefinition, this, request);
}

void ECSClient::DescribeTaskDefinitionAsync(const DescribeTaskDefinitionRequest& request) const
{
  m_executor->Submit(&ECSClient::DescribeTaskDefinitionAsyncHelper, this, request);
}

void ECSClient::DescribeTaskDefinitionAsyncHelper(const DescribeTaskDefinitionRequest& request) const
{
  m_onDescribeTaskDefinitionOutcomeReceived(this, request, DescribeTaskDefinition(request));
}

DescribeTasksOutcome ECSClient::DescribeTasks(const DescribeTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTasksOutcome(DescribeTasksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTasksOutcome(outcome.GetError());
  }
}

DescribeTasksOutcomeCallable ECSClient::DescribeTasksCallable(const DescribeTasksRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DescribeTasks, this, request);
}

void ECSClient::DescribeTasksAsync(const DescribeTasksRequest& request) const
{
  m_executor->Submit(&ECSClient::DescribeTasksAsyncHelper, this, request);
}

void ECSClient::DescribeTasksAsyncHelper(const DescribeTasksRequest& request) const
{
  m_onDescribeTasksOutcomeReceived(this, request, DescribeTasks(request));
}

DiscoverPollEndpointOutcome ECSClient::DiscoverPollEndpoint(const DiscoverPollEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DiscoverPollEndpointOutcome(DiscoverPollEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DiscoverPollEndpointOutcome(outcome.GetError());
  }
}

DiscoverPollEndpointOutcomeCallable ECSClient::DiscoverPollEndpointCallable(const DiscoverPollEndpointRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::DiscoverPollEndpoint, this, request);
}

void ECSClient::DiscoverPollEndpointAsync(const DiscoverPollEndpointRequest& request) const
{
  m_executor->Submit(&ECSClient::DiscoverPollEndpointAsyncHelper, this, request);
}

void ECSClient::DiscoverPollEndpointAsyncHelper(const DiscoverPollEndpointRequest& request) const
{
  m_onDiscoverPollEndpointOutcomeReceived(this, request, DiscoverPollEndpoint(request));
}

ListClustersOutcome ECSClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListClustersOutcome(ListClustersResult(outcome.GetResult()));
  }
  else
  {
    return ListClustersOutcome(outcome.GetError());
  }
}

ListClustersOutcomeCallable ECSClient::ListClustersCallable(const ListClustersRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::ListClusters, this, request);
}

void ECSClient::ListClustersAsync(const ListClustersRequest& request) const
{
  m_executor->Submit(&ECSClient::ListClustersAsyncHelper, this, request);
}

void ECSClient::ListClustersAsyncHelper(const ListClustersRequest& request) const
{
  m_onListClustersOutcomeReceived(this, request, ListClusters(request));
}

ListContainerInstancesOutcome ECSClient::ListContainerInstances(const ListContainerInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListContainerInstancesOutcome(ListContainerInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListContainerInstancesOutcome(outcome.GetError());
  }
}

ListContainerInstancesOutcomeCallable ECSClient::ListContainerInstancesCallable(const ListContainerInstancesRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::ListContainerInstances, this, request);
}

void ECSClient::ListContainerInstancesAsync(const ListContainerInstancesRequest& request) const
{
  m_executor->Submit(&ECSClient::ListContainerInstancesAsyncHelper, this, request);
}

void ECSClient::ListContainerInstancesAsyncHelper(const ListContainerInstancesRequest& request) const
{
  m_onListContainerInstancesOutcomeReceived(this, request, ListContainerInstances(request));
}

ListServicesOutcome ECSClient::ListServices(const ListServicesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListServicesOutcome(ListServicesResult(outcome.GetResult()));
  }
  else
  {
    return ListServicesOutcome(outcome.GetError());
  }
}

ListServicesOutcomeCallable ECSClient::ListServicesCallable(const ListServicesRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::ListServices, this, request);
}

void ECSClient::ListServicesAsync(const ListServicesRequest& request) const
{
  m_executor->Submit(&ECSClient::ListServicesAsyncHelper, this, request);
}

void ECSClient::ListServicesAsyncHelper(const ListServicesRequest& request) const
{
  m_onListServicesOutcomeReceived(this, request, ListServices(request));
}

ListTaskDefinitionFamiliesOutcome ECSClient::ListTaskDefinitionFamilies(const ListTaskDefinitionFamiliesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTaskDefinitionFamiliesOutcome(ListTaskDefinitionFamiliesResult(outcome.GetResult()));
  }
  else
  {
    return ListTaskDefinitionFamiliesOutcome(outcome.GetError());
  }
}

ListTaskDefinitionFamiliesOutcomeCallable ECSClient::ListTaskDefinitionFamiliesCallable(const ListTaskDefinitionFamiliesRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::ListTaskDefinitionFamilies, this, request);
}

void ECSClient::ListTaskDefinitionFamiliesAsync(const ListTaskDefinitionFamiliesRequest& request) const
{
  m_executor->Submit(&ECSClient::ListTaskDefinitionFamiliesAsyncHelper, this, request);
}

void ECSClient::ListTaskDefinitionFamiliesAsyncHelper(const ListTaskDefinitionFamiliesRequest& request) const
{
  m_onListTaskDefinitionFamiliesOutcomeReceived(this, request, ListTaskDefinitionFamilies(request));
}

ListTaskDefinitionsOutcome ECSClient::ListTaskDefinitions(const ListTaskDefinitionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTaskDefinitionsOutcome(ListTaskDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return ListTaskDefinitionsOutcome(outcome.GetError());
  }
}

ListTaskDefinitionsOutcomeCallable ECSClient::ListTaskDefinitionsCallable(const ListTaskDefinitionsRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::ListTaskDefinitions, this, request);
}

void ECSClient::ListTaskDefinitionsAsync(const ListTaskDefinitionsRequest& request) const
{
  m_executor->Submit(&ECSClient::ListTaskDefinitionsAsyncHelper, this, request);
}

void ECSClient::ListTaskDefinitionsAsyncHelper(const ListTaskDefinitionsRequest& request) const
{
  m_onListTaskDefinitionsOutcomeReceived(this, request, ListTaskDefinitions(request));
}

ListTasksOutcome ECSClient::ListTasks(const ListTasksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTasksOutcome(ListTasksResult(outcome.GetResult()));
  }
  else
  {
    return ListTasksOutcome(outcome.GetError());
  }
}

ListTasksOutcomeCallable ECSClient::ListTasksCallable(const ListTasksRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::ListTasks, this, request);
}

void ECSClient::ListTasksAsync(const ListTasksRequest& request) const
{
  m_executor->Submit(&ECSClient::ListTasksAsyncHelper, this, request);
}

void ECSClient::ListTasksAsyncHelper(const ListTasksRequest& request) const
{
  m_onListTasksOutcomeReceived(this, request, ListTasks(request));
}

RegisterContainerInstanceOutcome ECSClient::RegisterContainerInstance(const RegisterContainerInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterContainerInstanceOutcome(RegisterContainerInstanceResult(outcome.GetResult()));
  }
  else
  {
    return RegisterContainerInstanceOutcome(outcome.GetError());
  }
}

RegisterContainerInstanceOutcomeCallable ECSClient::RegisterContainerInstanceCallable(const RegisterContainerInstanceRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::RegisterContainerInstance, this, request);
}

void ECSClient::RegisterContainerInstanceAsync(const RegisterContainerInstanceRequest& request) const
{
  m_executor->Submit(&ECSClient::RegisterContainerInstanceAsyncHelper, this, request);
}

void ECSClient::RegisterContainerInstanceAsyncHelper(const RegisterContainerInstanceRequest& request) const
{
  m_onRegisterContainerInstanceOutcomeReceived(this, request, RegisterContainerInstance(request));
}

RegisterTaskDefinitionOutcome ECSClient::RegisterTaskDefinition(const RegisterTaskDefinitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterTaskDefinitionOutcome(RegisterTaskDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return RegisterTaskDefinitionOutcome(outcome.GetError());
  }
}

RegisterTaskDefinitionOutcomeCallable ECSClient::RegisterTaskDefinitionCallable(const RegisterTaskDefinitionRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::RegisterTaskDefinition, this, request);
}

void ECSClient::RegisterTaskDefinitionAsync(const RegisterTaskDefinitionRequest& request) const
{
  m_executor->Submit(&ECSClient::RegisterTaskDefinitionAsyncHelper, this, request);
}

void ECSClient::RegisterTaskDefinitionAsyncHelper(const RegisterTaskDefinitionRequest& request) const
{
  m_onRegisterTaskDefinitionOutcomeReceived(this, request, RegisterTaskDefinition(request));
}

RunTaskOutcome ECSClient::RunTask(const RunTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RunTaskOutcome(RunTaskResult(outcome.GetResult()));
  }
  else
  {
    return RunTaskOutcome(outcome.GetError());
  }
}

RunTaskOutcomeCallable ECSClient::RunTaskCallable(const RunTaskRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::RunTask, this, request);
}

void ECSClient::RunTaskAsync(const RunTaskRequest& request) const
{
  m_executor->Submit(&ECSClient::RunTaskAsyncHelper, this, request);
}

void ECSClient::RunTaskAsyncHelper(const RunTaskRequest& request) const
{
  m_onRunTaskOutcomeReceived(this, request, RunTask(request));
}

StartTaskOutcome ECSClient::StartTask(const StartTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartTaskOutcome(StartTaskResult(outcome.GetResult()));
  }
  else
  {
    return StartTaskOutcome(outcome.GetError());
  }
}

StartTaskOutcomeCallable ECSClient::StartTaskCallable(const StartTaskRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::StartTask, this, request);
}

void ECSClient::StartTaskAsync(const StartTaskRequest& request) const
{
  m_executor->Submit(&ECSClient::StartTaskAsyncHelper, this, request);
}

void ECSClient::StartTaskAsyncHelper(const StartTaskRequest& request) const
{
  m_onStartTaskOutcomeReceived(this, request, StartTask(request));
}

StopTaskOutcome ECSClient::StopTask(const StopTaskRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopTaskOutcome(StopTaskResult(outcome.GetResult()));
  }
  else
  {
    return StopTaskOutcome(outcome.GetError());
  }
}

StopTaskOutcomeCallable ECSClient::StopTaskCallable(const StopTaskRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::StopTask, this, request);
}

void ECSClient::StopTaskAsync(const StopTaskRequest& request) const
{
  m_executor->Submit(&ECSClient::StopTaskAsyncHelper, this, request);
}

void ECSClient::StopTaskAsyncHelper(const StopTaskRequest& request) const
{
  m_onStopTaskOutcomeReceived(this, request, StopTask(request));
}

SubmitContainerStateChangeOutcome ECSClient::SubmitContainerStateChange(const SubmitContainerStateChangeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SubmitContainerStateChangeOutcome(SubmitContainerStateChangeResult(outcome.GetResult()));
  }
  else
  {
    return SubmitContainerStateChangeOutcome(outcome.GetError());
  }
}

SubmitContainerStateChangeOutcomeCallable ECSClient::SubmitContainerStateChangeCallable(const SubmitContainerStateChangeRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::SubmitContainerStateChange, this, request);
}

void ECSClient::SubmitContainerStateChangeAsync(const SubmitContainerStateChangeRequest& request) const
{
  m_executor->Submit(&ECSClient::SubmitContainerStateChangeAsyncHelper, this, request);
}

void ECSClient::SubmitContainerStateChangeAsyncHelper(const SubmitContainerStateChangeRequest& request) const
{
  m_onSubmitContainerStateChangeOutcomeReceived(this, request, SubmitContainerStateChange(request));
}

SubmitTaskStateChangeOutcome ECSClient::SubmitTaskStateChange(const SubmitTaskStateChangeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SubmitTaskStateChangeOutcome(SubmitTaskStateChangeResult(outcome.GetResult()));
  }
  else
  {
    return SubmitTaskStateChangeOutcome(outcome.GetError());
  }
}

SubmitTaskStateChangeOutcomeCallable ECSClient::SubmitTaskStateChangeCallable(const SubmitTaskStateChangeRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::SubmitTaskStateChange, this, request);
}

void ECSClient::SubmitTaskStateChangeAsync(const SubmitTaskStateChangeRequest& request) const
{
  m_executor->Submit(&ECSClient::SubmitTaskStateChangeAsyncHelper, this, request);
}

void ECSClient::SubmitTaskStateChangeAsyncHelper(const SubmitTaskStateChangeRequest& request) const
{
  m_onSubmitTaskStateChangeOutcomeReceived(this, request, SubmitTaskStateChange(request));
}

UpdateContainerAgentOutcome ECSClient::UpdateContainerAgent(const UpdateContainerAgentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateContainerAgentOutcome(UpdateContainerAgentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateContainerAgentOutcome(outcome.GetError());
  }
}

UpdateContainerAgentOutcomeCallable ECSClient::UpdateContainerAgentCallable(const UpdateContainerAgentRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::UpdateContainerAgent, this, request);
}

void ECSClient::UpdateContainerAgentAsync(const UpdateContainerAgentRequest& request) const
{
  m_executor->Submit(&ECSClient::UpdateContainerAgentAsyncHelper, this, request);
}

void ECSClient::UpdateContainerAgentAsyncHelper(const UpdateContainerAgentRequest& request) const
{
  m_onUpdateContainerAgentOutcomeReceived(this, request, UpdateContainerAgent(request));
}

UpdateServiceOutcome ECSClient::UpdateService(const UpdateServiceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateServiceOutcome(UpdateServiceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateServiceOutcome(outcome.GetError());
  }
}

UpdateServiceOutcomeCallable ECSClient::UpdateServiceCallable(const UpdateServiceRequest& request) const
{
  return std::async(std::launch::async, &ECSClient::UpdateService, this, request);
}

void ECSClient::UpdateServiceAsync(const UpdateServiceRequest& request) const
{
  m_executor->Submit(&ECSClient::UpdateServiceAsyncHelper, this, request);
}

void ECSClient::UpdateServiceAsyncHelper(const UpdateServiceRequest& request) const
{
  m_onUpdateServiceOutcomeReceived(this, request, UpdateService(request));
}

