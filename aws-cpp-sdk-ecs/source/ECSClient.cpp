/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/ecs/ECSClient.h>
#include <aws/ecs/ECSEndpoint.h>
#include <aws/ecs/ECSErrorMarshaller.h>
#include <aws/ecs/model/CreateCapacityProviderRequest.h>
#include <aws/ecs/model/CreateClusterRequest.h>
#include <aws/ecs/model/CreateServiceRequest.h>
#include <aws/ecs/model/CreateTaskSetRequest.h>
#include <aws/ecs/model/DeleteAccountSettingRequest.h>
#include <aws/ecs/model/DeleteAttributesRequest.h>
#include <aws/ecs/model/DeleteCapacityProviderRequest.h>
#include <aws/ecs/model/DeleteClusterRequest.h>
#include <aws/ecs/model/DeleteServiceRequest.h>
#include <aws/ecs/model/DeleteTaskSetRequest.h>
#include <aws/ecs/model/DeregisterContainerInstanceRequest.h>
#include <aws/ecs/model/DeregisterTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeCapacityProvidersRequest.h>
#include <aws/ecs/model/DescribeClustersRequest.h>
#include <aws/ecs/model/DescribeContainerInstancesRequest.h>
#include <aws/ecs/model/DescribeServicesRequest.h>
#include <aws/ecs/model/DescribeTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeTaskSetsRequest.h>
#include <aws/ecs/model/DescribeTasksRequest.h>
#include <aws/ecs/model/DiscoverPollEndpointRequest.h>
#include <aws/ecs/model/ExecuteCommandRequest.h>
#include <aws/ecs/model/ListAccountSettingsRequest.h>
#include <aws/ecs/model/ListAttributesRequest.h>
#include <aws/ecs/model/ListClustersRequest.h>
#include <aws/ecs/model/ListContainerInstancesRequest.h>
#include <aws/ecs/model/ListServicesRequest.h>
#include <aws/ecs/model/ListTagsForResourceRequest.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesRequest.h>
#include <aws/ecs/model/ListTaskDefinitionsRequest.h>
#include <aws/ecs/model/ListTasksRequest.h>
#include <aws/ecs/model/PutAccountSettingRequest.h>
#include <aws/ecs/model/PutAccountSettingDefaultRequest.h>
#include <aws/ecs/model/PutAttributesRequest.h>
#include <aws/ecs/model/PutClusterCapacityProvidersRequest.h>
#include <aws/ecs/model/RegisterContainerInstanceRequest.h>
#include <aws/ecs/model/RegisterTaskDefinitionRequest.h>
#include <aws/ecs/model/RunTaskRequest.h>
#include <aws/ecs/model/StartTaskRequest.h>
#include <aws/ecs/model/StopTaskRequest.h>
#include <aws/ecs/model/SubmitAttachmentStateChangesRequest.h>
#include <aws/ecs/model/SubmitContainerStateChangeRequest.h>
#include <aws/ecs/model/SubmitTaskStateChangeRequest.h>
#include <aws/ecs/model/TagResourceRequest.h>
#include <aws/ecs/model/UntagResourceRequest.h>
#include <aws/ecs/model/UpdateCapacityProviderRequest.h>
#include <aws/ecs/model/UpdateClusterRequest.h>
#include <aws/ecs/model/UpdateClusterSettingsRequest.h>
#include <aws/ecs/model/UpdateContainerAgentRequest.h>
#include <aws/ecs/model/UpdateContainerInstancesStateRequest.h>
#include <aws/ecs/model/UpdateServiceRequest.h>
#include <aws/ecs/model/UpdateServicePrimaryTaskSetRequest.h>
#include <aws/ecs/model/UpdateTaskSetRequest.h>

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
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECSClient::ECSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECSClient::ECSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("ECS");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ECSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ECSClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateCapacityProviderOutcome ECSClient::CreateCapacityProvider(const CreateCapacityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateCapacityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCapacityProviderOutcomeCallable ECSClient::CreateCapacityProviderCallable(const CreateCapacityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCapacityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCapacityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::CreateCapacityProviderAsync(const CreateCapacityProviderRequest& request, const CreateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCapacityProviderAsyncHelper( request, handler, context ); } );
}

void ECSClient::CreateCapacityProviderAsyncHelper(const CreateCapacityProviderRequest& request, const CreateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCapacityProvider(request), context);
}

CreateClusterOutcome ECSClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable ECSClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateClusterAsyncHelper( request, handler, context ); } );
}

void ECSClient::CreateClusterAsyncHelper(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCluster(request), context);
}

CreateServiceOutcome ECSClient::CreateService(const CreateServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceOutcomeCallable ECSClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateServiceAsyncHelper( request, handler, context ); } );
}

void ECSClient::CreateServiceAsyncHelper(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateService(request), context);
}

CreateTaskSetOutcome ECSClient::CreateTaskSet(const CreateTaskSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateTaskSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTaskSetOutcomeCallable ECSClient::CreateTaskSetCallable(const CreateTaskSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTaskSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTaskSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::CreateTaskSetAsync(const CreateTaskSetRequest& request, const CreateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTaskSetAsyncHelper( request, handler, context ); } );
}

void ECSClient::CreateTaskSetAsyncHelper(const CreateTaskSetRequest& request, const CreateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTaskSet(request), context);
}

DeleteAccountSettingOutcome ECSClient::DeleteAccountSetting(const DeleteAccountSettingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAccountSettingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountSettingOutcomeCallable ECSClient::DeleteAccountSettingCallable(const DeleteAccountSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DeleteAccountSettingAsync(const DeleteAccountSettingRequest& request, const DeleteAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccountSettingAsyncHelper( request, handler, context ); } );
}

void ECSClient::DeleteAccountSettingAsyncHelper(const DeleteAccountSettingRequest& request, const DeleteAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccountSetting(request), context);
}

DeleteAttributesOutcome ECSClient::DeleteAttributes(const DeleteAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAttributesOutcomeCallable ECSClient::DeleteAttributesCallable(const DeleteAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DeleteAttributesAsync(const DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAttributesAsyncHelper( request, handler, context ); } );
}

void ECSClient::DeleteAttributesAsyncHelper(const DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAttributes(request), context);
}

DeleteCapacityProviderOutcome ECSClient::DeleteCapacityProvider(const DeleteCapacityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteCapacityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCapacityProviderOutcomeCallable ECSClient::DeleteCapacityProviderCallable(const DeleteCapacityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCapacityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCapacityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DeleteCapacityProviderAsync(const DeleteCapacityProviderRequest& request, const DeleteCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCapacityProviderAsyncHelper( request, handler, context ); } );
}

void ECSClient::DeleteCapacityProviderAsyncHelper(const DeleteCapacityProviderRequest& request, const DeleteCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCapacityProvider(request), context);
}

DeleteClusterOutcome ECSClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteClusterOutcomeCallable ECSClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteClusterAsyncHelper( request, handler, context ); } );
}

void ECSClient::DeleteClusterAsyncHelper(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCluster(request), context);
}

DeleteServiceOutcome ECSClient::DeleteService(const DeleteServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceOutcomeCallable ECSClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceAsyncHelper( request, handler, context ); } );
}

void ECSClient::DeleteServiceAsyncHelper(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteService(request), context);
}

DeleteTaskSetOutcome ECSClient::DeleteTaskSet(const DeleteTaskSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteTaskSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTaskSetOutcomeCallable ECSClient::DeleteTaskSetCallable(const DeleteTaskSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTaskSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTaskSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DeleteTaskSetAsync(const DeleteTaskSetRequest& request, const DeleteTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTaskSetAsyncHelper( request, handler, context ); } );
}

void ECSClient::DeleteTaskSetAsyncHelper(const DeleteTaskSetRequest& request, const DeleteTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTaskSet(request), context);
}

DeregisterContainerInstanceOutcome ECSClient::DeregisterContainerInstance(const DeregisterContainerInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeregisterContainerInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterContainerInstanceOutcomeCallable ECSClient::DeregisterContainerInstanceCallable(const DeregisterContainerInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterContainerInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterContainerInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DeregisterContainerInstanceAsync(const DeregisterContainerInstanceRequest& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterContainerInstanceAsyncHelper( request, handler, context ); } );
}

void ECSClient::DeregisterContainerInstanceAsyncHelper(const DeregisterContainerInstanceRequest& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterContainerInstance(request), context);
}

DeregisterTaskDefinitionOutcome ECSClient::DeregisterTaskDefinition(const DeregisterTaskDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeregisterTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterTaskDefinitionOutcomeCallable ECSClient::DeregisterTaskDefinitionCallable(const DeregisterTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DeregisterTaskDefinitionAsync(const DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterTaskDefinitionAsyncHelper( request, handler, context ); } );
}

void ECSClient::DeregisterTaskDefinitionAsyncHelper(const DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterTaskDefinition(request), context);
}

DescribeCapacityProvidersOutcome ECSClient::DescribeCapacityProviders(const DescribeCapacityProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeCapacityProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCapacityProvidersOutcomeCallable ECSClient::DescribeCapacityProvidersCallable(const DescribeCapacityProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCapacityProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCapacityProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DescribeCapacityProvidersAsync(const DescribeCapacityProvidersRequest& request, const DescribeCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCapacityProvidersAsyncHelper( request, handler, context ); } );
}

void ECSClient::DescribeCapacityProvidersAsyncHelper(const DescribeCapacityProvidersRequest& request, const DescribeCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCapacityProviders(request), context);
}

DescribeClustersOutcome ECSClient::DescribeClusters(const DescribeClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClustersOutcomeCallable ECSClient::DescribeClustersCallable(const DescribeClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClustersAsyncHelper( request, handler, context ); } );
}

void ECSClient::DescribeClustersAsyncHelper(const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClusters(request), context);
}

DescribeContainerInstancesOutcome ECSClient::DescribeContainerInstances(const DescribeContainerInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeContainerInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContainerInstancesOutcomeCallable ECSClient::DescribeContainerInstancesCallable(const DescribeContainerInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContainerInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContainerInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DescribeContainerInstancesAsync(const DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeContainerInstancesAsyncHelper( request, handler, context ); } );
}

void ECSClient::DescribeContainerInstancesAsyncHelper(const DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeContainerInstances(request), context);
}

DescribeServicesOutcome ECSClient::DescribeServices(const DescribeServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServicesOutcomeCallable ECSClient::DescribeServicesCallable(const DescribeServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DescribeServicesAsync(const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServicesAsyncHelper( request, handler, context ); } );
}

void ECSClient::DescribeServicesAsyncHelper(const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServices(request), context);
}

DescribeTaskDefinitionOutcome ECSClient::DescribeTaskDefinition(const DescribeTaskDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTaskDefinitionOutcomeCallable ECSClient::DescribeTaskDefinitionCallable(const DescribeTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DescribeTaskDefinitionAsync(const DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTaskDefinitionAsyncHelper( request, handler, context ); } );
}

void ECSClient::DescribeTaskDefinitionAsyncHelper(const DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTaskDefinition(request), context);
}

DescribeTaskSetsOutcome ECSClient::DescribeTaskSets(const DescribeTaskSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeTaskSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTaskSetsOutcomeCallable ECSClient::DescribeTaskSetsCallable(const DescribeTaskSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTaskSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DescribeTaskSetsAsync(const DescribeTaskSetsRequest& request, const DescribeTaskSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTaskSetsAsyncHelper( request, handler, context ); } );
}

void ECSClient::DescribeTaskSetsAsyncHelper(const DescribeTaskSetsRequest& request, const DescribeTaskSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTaskSets(request), context);
}

DescribeTasksOutcome ECSClient::DescribeTasks(const DescribeTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTasksOutcomeCallable ECSClient::DescribeTasksCallable(const DescribeTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTasksAsyncHelper( request, handler, context ); } );
}

void ECSClient::DescribeTasksAsyncHelper(const DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTasks(request), context);
}

DiscoverPollEndpointOutcome ECSClient::DiscoverPollEndpoint(const DiscoverPollEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DiscoverPollEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DiscoverPollEndpointOutcomeCallable ECSClient::DiscoverPollEndpointCallable(const DiscoverPollEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DiscoverPollEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DiscoverPollEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::DiscoverPollEndpointAsync(const DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DiscoverPollEndpointAsyncHelper( request, handler, context ); } );
}

void ECSClient::DiscoverPollEndpointAsyncHelper(const DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DiscoverPollEndpoint(request), context);
}

ExecuteCommandOutcome ECSClient::ExecuteCommand(const ExecuteCommandRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ExecuteCommandOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteCommandOutcomeCallable ECSClient::ExecuteCommandCallable(const ExecuteCommandRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteCommandOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteCommand(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ExecuteCommandAsync(const ExecuteCommandRequest& request, const ExecuteCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExecuteCommandAsyncHelper( request, handler, context ); } );
}

void ECSClient::ExecuteCommandAsyncHelper(const ExecuteCommandRequest& request, const ExecuteCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExecuteCommand(request), context);
}

ListAccountSettingsOutcome ECSClient::ListAccountSettings(const ListAccountSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountSettingsOutcomeCallable ECSClient::ListAccountSettingsCallable(const ListAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListAccountSettingsAsync(const ListAccountSettingsRequest& request, const ListAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountSettingsAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListAccountSettingsAsyncHelper(const ListAccountSettingsRequest& request, const ListAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountSettings(request), context);
}

ListAttributesOutcome ECSClient::ListAttributes(const ListAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAttributesOutcomeCallable ECSClient::ListAttributesCallable(const ListAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListAttributesAsync(const ListAttributesRequest& request, const ListAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttributesAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListAttributesAsyncHelper(const ListAttributesRequest& request, const ListAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttributes(request), context);
}

ListClustersOutcome ECSClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable ECSClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListClustersAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListClustersAsyncHelper(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListClusters(request), context);
}

ListContainerInstancesOutcome ECSClient::ListContainerInstances(const ListContainerInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListContainerInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContainerInstancesOutcomeCallable ECSClient::ListContainerInstancesCallable(const ListContainerInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContainerInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContainerInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListContainerInstancesAsync(const ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListContainerInstancesAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListContainerInstancesAsyncHelper(const ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListContainerInstances(request), context);
}

ListServicesOutcome ECSClient::ListServices(const ListServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcomeCallable ECSClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServicesAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListServicesAsyncHelper(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServices(request), context);
}

ListTagsForResourceOutcome ECSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ECSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTaskDefinitionFamiliesOutcome ECSClient::ListTaskDefinitionFamilies(const ListTaskDefinitionFamiliesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTaskDefinitionFamiliesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTaskDefinitionFamiliesOutcomeCallable ECSClient::ListTaskDefinitionFamiliesCallable(const ListTaskDefinitionFamiliesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTaskDefinitionFamiliesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTaskDefinitionFamilies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListTaskDefinitionFamiliesAsync(const ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTaskDefinitionFamiliesAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListTaskDefinitionFamiliesAsyncHelper(const ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTaskDefinitionFamilies(request), context);
}

ListTaskDefinitionsOutcome ECSClient::ListTaskDefinitions(const ListTaskDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTaskDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTaskDefinitionsOutcomeCallable ECSClient::ListTaskDefinitionsCallable(const ListTaskDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTaskDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTaskDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListTaskDefinitionsAsync(const ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTaskDefinitionsAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListTaskDefinitionsAsyncHelper(const ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTaskDefinitions(request), context);
}

ListTasksOutcome ECSClient::ListTasks(const ListTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTasksOutcomeCallable ECSClient::ListTasksCallable(const ListTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTasksAsyncHelper( request, handler, context ); } );
}

void ECSClient::ListTasksAsyncHelper(const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTasks(request), context);
}

PutAccountSettingOutcome ECSClient::PutAccountSetting(const PutAccountSettingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAccountSettingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccountSettingOutcomeCallable ECSClient::PutAccountSettingCallable(const PutAccountSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::PutAccountSettingAsync(const PutAccountSettingRequest& request, const PutAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAccountSettingAsyncHelper( request, handler, context ); } );
}

void ECSClient::PutAccountSettingAsyncHelper(const PutAccountSettingRequest& request, const PutAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAccountSetting(request), context);
}

PutAccountSettingDefaultOutcome ECSClient::PutAccountSettingDefault(const PutAccountSettingDefaultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAccountSettingDefaultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccountSettingDefaultOutcomeCallable ECSClient::PutAccountSettingDefaultCallable(const PutAccountSettingDefaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSettingDefaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSettingDefault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::PutAccountSettingDefaultAsync(const PutAccountSettingDefaultRequest& request, const PutAccountSettingDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAccountSettingDefaultAsyncHelper( request, handler, context ); } );
}

void ECSClient::PutAccountSettingDefaultAsyncHelper(const PutAccountSettingDefaultRequest& request, const PutAccountSettingDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAccountSettingDefault(request), context);
}

PutAttributesOutcome ECSClient::PutAttributes(const PutAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAttributesOutcomeCallable ECSClient::PutAttributesCallable(const PutAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::PutAttributesAsync(const PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAttributesAsyncHelper( request, handler, context ); } );
}

void ECSClient::PutAttributesAsyncHelper(const PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAttributes(request), context);
}

PutClusterCapacityProvidersOutcome ECSClient::PutClusterCapacityProviders(const PutClusterCapacityProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutClusterCapacityProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutClusterCapacityProvidersOutcomeCallable ECSClient::PutClusterCapacityProvidersCallable(const PutClusterCapacityProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutClusterCapacityProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutClusterCapacityProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::PutClusterCapacityProvidersAsync(const PutClusterCapacityProvidersRequest& request, const PutClusterCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutClusterCapacityProvidersAsyncHelper( request, handler, context ); } );
}

void ECSClient::PutClusterCapacityProvidersAsyncHelper(const PutClusterCapacityProvidersRequest& request, const PutClusterCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutClusterCapacityProviders(request), context);
}

RegisterContainerInstanceOutcome ECSClient::RegisterContainerInstance(const RegisterContainerInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RegisterContainerInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterContainerInstanceOutcomeCallable ECSClient::RegisterContainerInstanceCallable(const RegisterContainerInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterContainerInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterContainerInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::RegisterContainerInstanceAsync(const RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterContainerInstanceAsyncHelper( request, handler, context ); } );
}

void ECSClient::RegisterContainerInstanceAsyncHelper(const RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterContainerInstance(request), context);
}

RegisterTaskDefinitionOutcome ECSClient::RegisterTaskDefinition(const RegisterTaskDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RegisterTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterTaskDefinitionOutcomeCallable ECSClient::RegisterTaskDefinitionCallable(const RegisterTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::RegisterTaskDefinitionAsync(const RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterTaskDefinitionAsyncHelper( request, handler, context ); } );
}

void ECSClient::RegisterTaskDefinitionAsyncHelper(const RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterTaskDefinition(request), context);
}

RunTaskOutcome ECSClient::RunTask(const RunTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RunTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunTaskOutcomeCallable ECSClient::RunTaskCallable(const RunTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::RunTaskAsync(const RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RunTaskAsyncHelper( request, handler, context ); } );
}

void ECSClient::RunTaskAsyncHelper(const RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunTask(request), context);
}

StartTaskOutcome ECSClient::StartTask(const StartTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTaskOutcomeCallable ECSClient::StartTaskCallable(const StartTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::StartTaskAsync(const StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTaskAsyncHelper( request, handler, context ); } );
}

void ECSClient::StartTaskAsyncHelper(const StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTask(request), context);
}

StopTaskOutcome ECSClient::StopTask(const StopTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTaskOutcomeCallable ECSClient::StopTaskCallable(const StopTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::StopTaskAsync(const StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopTaskAsyncHelper( request, handler, context ); } );
}

void ECSClient::StopTaskAsyncHelper(const StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopTask(request), context);
}

SubmitAttachmentStateChangesOutcome ECSClient::SubmitAttachmentStateChanges(const SubmitAttachmentStateChangesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return SubmitAttachmentStateChangesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitAttachmentStateChangesOutcomeCallable ECSClient::SubmitAttachmentStateChangesCallable(const SubmitAttachmentStateChangesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitAttachmentStateChangesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitAttachmentStateChanges(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::SubmitAttachmentStateChangesAsync(const SubmitAttachmentStateChangesRequest& request, const SubmitAttachmentStateChangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SubmitAttachmentStateChangesAsyncHelper( request, handler, context ); } );
}

void ECSClient::SubmitAttachmentStateChangesAsyncHelper(const SubmitAttachmentStateChangesRequest& request, const SubmitAttachmentStateChangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SubmitAttachmentStateChanges(request), context);
}

SubmitContainerStateChangeOutcome ECSClient::SubmitContainerStateChange(const SubmitContainerStateChangeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return SubmitContainerStateChangeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitContainerStateChangeOutcomeCallable ECSClient::SubmitContainerStateChangeCallable(const SubmitContainerStateChangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitContainerStateChangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitContainerStateChange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::SubmitContainerStateChangeAsync(const SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SubmitContainerStateChangeAsyncHelper( request, handler, context ); } );
}

void ECSClient::SubmitContainerStateChangeAsyncHelper(const SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SubmitContainerStateChange(request), context);
}

SubmitTaskStateChangeOutcome ECSClient::SubmitTaskStateChange(const SubmitTaskStateChangeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return SubmitTaskStateChangeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitTaskStateChangeOutcomeCallable ECSClient::SubmitTaskStateChangeCallable(const SubmitTaskStateChangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitTaskStateChangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitTaskStateChange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::SubmitTaskStateChangeAsync(const SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SubmitTaskStateChangeAsyncHelper( request, handler, context ); } );
}

void ECSClient::SubmitTaskStateChangeAsyncHelper(const SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SubmitTaskStateChange(request), context);
}

TagResourceOutcome ECSClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ECSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ECSClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ECSClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ECSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ECSClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateCapacityProviderOutcome ECSClient::UpdateCapacityProvider(const UpdateCapacityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateCapacityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCapacityProviderOutcomeCallable ECSClient::UpdateCapacityProviderCallable(const UpdateCapacityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCapacityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCapacityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UpdateCapacityProviderAsync(const UpdateCapacityProviderRequest& request, const UpdateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCapacityProviderAsyncHelper( request, handler, context ); } );
}

void ECSClient::UpdateCapacityProviderAsyncHelper(const UpdateCapacityProviderRequest& request, const UpdateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCapacityProvider(request), context);
}

UpdateClusterOutcome ECSClient::UpdateCluster(const UpdateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterOutcomeCallable ECSClient::UpdateClusterCallable(const UpdateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UpdateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateClusterAsyncHelper( request, handler, context ); } );
}

void ECSClient::UpdateClusterAsyncHelper(const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCluster(request), context);
}

UpdateClusterSettingsOutcome ECSClient::UpdateClusterSettings(const UpdateClusterSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateClusterSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterSettingsOutcomeCallable ECSClient::UpdateClusterSettingsCallable(const UpdateClusterSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClusterSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UpdateClusterSettingsAsync(const UpdateClusterSettingsRequest& request, const UpdateClusterSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateClusterSettingsAsyncHelper( request, handler, context ); } );
}

void ECSClient::UpdateClusterSettingsAsyncHelper(const UpdateClusterSettingsRequest& request, const UpdateClusterSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateClusterSettings(request), context);
}

UpdateContainerAgentOutcome ECSClient::UpdateContainerAgent(const UpdateContainerAgentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateContainerAgentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContainerAgentOutcomeCallable ECSClient::UpdateContainerAgentCallable(const UpdateContainerAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContainerAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContainerAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UpdateContainerAgentAsync(const UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContainerAgentAsyncHelper( request, handler, context ); } );
}

void ECSClient::UpdateContainerAgentAsyncHelper(const UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContainerAgent(request), context);
}

UpdateContainerInstancesStateOutcome ECSClient::UpdateContainerInstancesState(const UpdateContainerInstancesStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateContainerInstancesStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContainerInstancesStateOutcomeCallable ECSClient::UpdateContainerInstancesStateCallable(const UpdateContainerInstancesStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContainerInstancesStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContainerInstancesState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UpdateContainerInstancesStateAsync(const UpdateContainerInstancesStateRequest& request, const UpdateContainerInstancesStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContainerInstancesStateAsyncHelper( request, handler, context ); } );
}

void ECSClient::UpdateContainerInstancesStateAsyncHelper(const UpdateContainerInstancesStateRequest& request, const UpdateContainerInstancesStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContainerInstancesState(request), context);
}

UpdateServiceOutcome ECSClient::UpdateService(const UpdateServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceOutcomeCallable ECSClient::UpdateServiceCallable(const UpdateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServiceAsyncHelper( request, handler, context ); } );
}

void ECSClient::UpdateServiceAsyncHelper(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateService(request), context);
}

UpdateServicePrimaryTaskSetOutcome ECSClient::UpdateServicePrimaryTaskSet(const UpdateServicePrimaryTaskSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateServicePrimaryTaskSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServicePrimaryTaskSetOutcomeCallable ECSClient::UpdateServicePrimaryTaskSetCallable(const UpdateServicePrimaryTaskSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServicePrimaryTaskSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServicePrimaryTaskSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UpdateServicePrimaryTaskSetAsync(const UpdateServicePrimaryTaskSetRequest& request, const UpdateServicePrimaryTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServicePrimaryTaskSetAsyncHelper( request, handler, context ); } );
}

void ECSClient::UpdateServicePrimaryTaskSetAsyncHelper(const UpdateServicePrimaryTaskSetRequest& request, const UpdateServicePrimaryTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServicePrimaryTaskSet(request), context);
}

UpdateTaskSetOutcome ECSClient::UpdateTaskSet(const UpdateTaskSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateTaskSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTaskSetOutcomeCallable ECSClient::UpdateTaskSetCallable(const UpdateTaskSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTaskSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTaskSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClient::UpdateTaskSetAsync(const UpdateTaskSetRequest& request, const UpdateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTaskSetAsyncHelper( request, handler, context ); } );
}

void ECSClient::UpdateTaskSetAsyncHelper(const UpdateTaskSetRequest& request, const UpdateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTaskSet(request), context);
}

