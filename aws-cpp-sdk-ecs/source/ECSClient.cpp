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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECSClient::ECSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECSClient::ECSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECSClient::~ECSClient()
{
}

void ECSClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ECS");
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
  return CreateCapacityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCapacityProviderOutcomeCallable ECSClient::CreateCapacityProviderCallable(const CreateCapacityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCapacityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCapacityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientCreateCapacityProviderAsyncHelper(ECSClient const * const clientThis, const CreateCapacityProviderRequest& request, const CreateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCapacityProvider(request), context);
}

void ECSClient::CreateCapacityProviderAsync(const CreateCapacityProviderRequest& request, const CreateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientCreateCapacityProviderAsyncHelper( this, request, handler, context ); } );
}

CreateClusterOutcome ECSClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable ECSClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientCreateClusterAsyncHelper(ECSClient const * const clientThis, const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCluster(request), context);
}

void ECSClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientCreateClusterAsyncHelper( this, request, handler, context ); } );
}

CreateServiceOutcome ECSClient::CreateService(const CreateServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceOutcomeCallable ECSClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientCreateServiceAsyncHelper(ECSClient const * const clientThis, const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateService(request), context);
}

void ECSClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientCreateServiceAsyncHelper( this, request, handler, context ); } );
}

CreateTaskSetOutcome ECSClient::CreateTaskSet(const CreateTaskSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTaskSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTaskSetOutcomeCallable ECSClient::CreateTaskSetCallable(const CreateTaskSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTaskSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTaskSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientCreateTaskSetAsyncHelper(ECSClient const * const clientThis, const CreateTaskSetRequest& request, const CreateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTaskSet(request), context);
}

void ECSClient::CreateTaskSetAsync(const CreateTaskSetRequest& request, const CreateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientCreateTaskSetAsyncHelper( this, request, handler, context ); } );
}

DeleteAccountSettingOutcome ECSClient::DeleteAccountSetting(const DeleteAccountSettingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAccountSettingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountSettingOutcomeCallable ECSClient::DeleteAccountSettingCallable(const DeleteAccountSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDeleteAccountSettingAsyncHelper(ECSClient const * const clientThis, const DeleteAccountSettingRequest& request, const DeleteAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccountSetting(request), context);
}

void ECSClient::DeleteAccountSettingAsync(const DeleteAccountSettingRequest& request, const DeleteAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDeleteAccountSettingAsyncHelper( this, request, handler, context ); } );
}

DeleteAttributesOutcome ECSClient::DeleteAttributes(const DeleteAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAttributesOutcomeCallable ECSClient::DeleteAttributesCallable(const DeleteAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDeleteAttributesAsyncHelper(ECSClient const * const clientThis, const DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAttributes(request), context);
}

void ECSClient::DeleteAttributesAsync(const DeleteAttributesRequest& request, const DeleteAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDeleteAttributesAsyncHelper( this, request, handler, context ); } );
}

DeleteCapacityProviderOutcome ECSClient::DeleteCapacityProvider(const DeleteCapacityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCapacityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCapacityProviderOutcomeCallable ECSClient::DeleteCapacityProviderCallable(const DeleteCapacityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCapacityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCapacityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDeleteCapacityProviderAsyncHelper(ECSClient const * const clientThis, const DeleteCapacityProviderRequest& request, const DeleteCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCapacityProvider(request), context);
}

void ECSClient::DeleteCapacityProviderAsync(const DeleteCapacityProviderRequest& request, const DeleteCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDeleteCapacityProviderAsyncHelper( this, request, handler, context ); } );
}

DeleteClusterOutcome ECSClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteClusterOutcomeCallable ECSClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDeleteClusterAsyncHelper(ECSClient const * const clientThis, const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCluster(request), context);
}

void ECSClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDeleteClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteServiceOutcome ECSClient::DeleteService(const DeleteServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceOutcomeCallable ECSClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDeleteServiceAsyncHelper(ECSClient const * const clientThis, const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteService(request), context);
}

void ECSClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDeleteServiceAsyncHelper( this, request, handler, context ); } );
}

DeleteTaskSetOutcome ECSClient::DeleteTaskSet(const DeleteTaskSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTaskSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTaskSetOutcomeCallable ECSClient::DeleteTaskSetCallable(const DeleteTaskSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTaskSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTaskSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDeleteTaskSetAsyncHelper(ECSClient const * const clientThis, const DeleteTaskSetRequest& request, const DeleteTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTaskSet(request), context);
}

void ECSClient::DeleteTaskSetAsync(const DeleteTaskSetRequest& request, const DeleteTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDeleteTaskSetAsyncHelper( this, request, handler, context ); } );
}

DeregisterContainerInstanceOutcome ECSClient::DeregisterContainerInstance(const DeregisterContainerInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterContainerInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterContainerInstanceOutcomeCallable ECSClient::DeregisterContainerInstanceCallable(const DeregisterContainerInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterContainerInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterContainerInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDeregisterContainerInstanceAsyncHelper(ECSClient const * const clientThis, const DeregisterContainerInstanceRequest& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterContainerInstance(request), context);
}

void ECSClient::DeregisterContainerInstanceAsync(const DeregisterContainerInstanceRequest& request, const DeregisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDeregisterContainerInstanceAsyncHelper( this, request, handler, context ); } );
}

DeregisterTaskDefinitionOutcome ECSClient::DeregisterTaskDefinition(const DeregisterTaskDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterTaskDefinitionOutcomeCallable ECSClient::DeregisterTaskDefinitionCallable(const DeregisterTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDeregisterTaskDefinitionAsyncHelper(ECSClient const * const clientThis, const DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterTaskDefinition(request), context);
}

void ECSClient::DeregisterTaskDefinitionAsync(const DeregisterTaskDefinitionRequest& request, const DeregisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDeregisterTaskDefinitionAsyncHelper( this, request, handler, context ); } );
}

DescribeCapacityProvidersOutcome ECSClient::DescribeCapacityProviders(const DescribeCapacityProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCapacityProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCapacityProvidersOutcomeCallable ECSClient::DescribeCapacityProvidersCallable(const DescribeCapacityProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCapacityProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCapacityProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDescribeCapacityProvidersAsyncHelper(ECSClient const * const clientThis, const DescribeCapacityProvidersRequest& request, const DescribeCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCapacityProviders(request), context);
}

void ECSClient::DescribeCapacityProvidersAsync(const DescribeCapacityProvidersRequest& request, const DescribeCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDescribeCapacityProvidersAsyncHelper( this, request, handler, context ); } );
}

DescribeClustersOutcome ECSClient::DescribeClusters(const DescribeClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClustersOutcomeCallable ECSClient::DescribeClustersCallable(const DescribeClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDescribeClustersAsyncHelper(ECSClient const * const clientThis, const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClusters(request), context);
}

void ECSClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDescribeClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeContainerInstancesOutcome ECSClient::DescribeContainerInstances(const DescribeContainerInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeContainerInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContainerInstancesOutcomeCallable ECSClient::DescribeContainerInstancesCallable(const DescribeContainerInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContainerInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContainerInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDescribeContainerInstancesAsyncHelper(ECSClient const * const clientThis, const DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeContainerInstances(request), context);
}

void ECSClient::DescribeContainerInstancesAsync(const DescribeContainerInstancesRequest& request, const DescribeContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDescribeContainerInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeServicesOutcome ECSClient::DescribeServices(const DescribeServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServicesOutcomeCallable ECSClient::DescribeServicesCallable(const DescribeServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDescribeServicesAsyncHelper(ECSClient const * const clientThis, const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServices(request), context);
}

void ECSClient::DescribeServicesAsync(const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDescribeServicesAsyncHelper( this, request, handler, context ); } );
}

DescribeTaskDefinitionOutcome ECSClient::DescribeTaskDefinition(const DescribeTaskDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTaskDefinitionOutcomeCallable ECSClient::DescribeTaskDefinitionCallable(const DescribeTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDescribeTaskDefinitionAsyncHelper(ECSClient const * const clientThis, const DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTaskDefinition(request), context);
}

void ECSClient::DescribeTaskDefinitionAsync(const DescribeTaskDefinitionRequest& request, const DescribeTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDescribeTaskDefinitionAsyncHelper( this, request, handler, context ); } );
}

DescribeTaskSetsOutcome ECSClient::DescribeTaskSets(const DescribeTaskSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTaskSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTaskSetsOutcomeCallable ECSClient::DescribeTaskSetsCallable(const DescribeTaskSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTaskSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDescribeTaskSetsAsyncHelper(ECSClient const * const clientThis, const DescribeTaskSetsRequest& request, const DescribeTaskSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTaskSets(request), context);
}

void ECSClient::DescribeTaskSetsAsync(const DescribeTaskSetsRequest& request, const DescribeTaskSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDescribeTaskSetsAsyncHelper( this, request, handler, context ); } );
}

DescribeTasksOutcome ECSClient::DescribeTasks(const DescribeTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTasksOutcomeCallable ECSClient::DescribeTasksCallable(const DescribeTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDescribeTasksAsyncHelper(ECSClient const * const clientThis, const DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTasks(request), context);
}

void ECSClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDescribeTasksAsyncHelper( this, request, handler, context ); } );
}

DiscoverPollEndpointOutcome ECSClient::DiscoverPollEndpoint(const DiscoverPollEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DiscoverPollEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DiscoverPollEndpointOutcomeCallable ECSClient::DiscoverPollEndpointCallable(const DiscoverPollEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DiscoverPollEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DiscoverPollEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientDiscoverPollEndpointAsyncHelper(ECSClient const * const clientThis, const DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DiscoverPollEndpoint(request), context);
}

void ECSClient::DiscoverPollEndpointAsync(const DiscoverPollEndpointRequest& request, const DiscoverPollEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientDiscoverPollEndpointAsyncHelper( this, request, handler, context ); } );
}

ExecuteCommandOutcome ECSClient::ExecuteCommand(const ExecuteCommandRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExecuteCommandOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteCommandOutcomeCallable ECSClient::ExecuteCommandCallable(const ExecuteCommandRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteCommandOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteCommand(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientExecuteCommandAsyncHelper(ECSClient const * const clientThis, const ExecuteCommandRequest& request, const ExecuteCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecuteCommand(request), context);
}

void ECSClient::ExecuteCommandAsync(const ExecuteCommandRequest& request, const ExecuteCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientExecuteCommandAsyncHelper( this, request, handler, context ); } );
}

ListAccountSettingsOutcome ECSClient::ListAccountSettings(const ListAccountSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountSettingsOutcomeCallable ECSClient::ListAccountSettingsCallable(const ListAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListAccountSettingsAsyncHelper(ECSClient const * const clientThis, const ListAccountSettingsRequest& request, const ListAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountSettings(request), context);
}

void ECSClient::ListAccountSettingsAsync(const ListAccountSettingsRequest& request, const ListAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListAccountSettingsAsyncHelper( this, request, handler, context ); } );
}

ListAttributesOutcome ECSClient::ListAttributes(const ListAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAttributesOutcomeCallable ECSClient::ListAttributesCallable(const ListAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListAttributesAsyncHelper(ECSClient const * const clientThis, const ListAttributesRequest& request, const ListAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAttributes(request), context);
}

void ECSClient::ListAttributesAsync(const ListAttributesRequest& request, const ListAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListAttributesAsyncHelper( this, request, handler, context ); } );
}

ListClustersOutcome ECSClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable ECSClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListClustersAsyncHelper(ECSClient const * const clientThis, const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClusters(request), context);
}

void ECSClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListClustersAsyncHelper( this, request, handler, context ); } );
}

ListContainerInstancesOutcome ECSClient::ListContainerInstances(const ListContainerInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListContainerInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContainerInstancesOutcomeCallable ECSClient::ListContainerInstancesCallable(const ListContainerInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContainerInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContainerInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListContainerInstancesAsyncHelper(ECSClient const * const clientThis, const ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContainerInstances(request), context);
}

void ECSClient::ListContainerInstancesAsync(const ListContainerInstancesRequest& request, const ListContainerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListContainerInstancesAsyncHelper( this, request, handler, context ); } );
}

ListServicesOutcome ECSClient::ListServices(const ListServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcomeCallable ECSClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListServicesAsyncHelper(ECSClient const * const clientThis, const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListServices(request), context);
}

void ECSClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListServicesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ECSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ECSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListTagsForResourceAsyncHelper(ECSClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ECSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTaskDefinitionFamiliesOutcome ECSClient::ListTaskDefinitionFamilies(const ListTaskDefinitionFamiliesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTaskDefinitionFamiliesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTaskDefinitionFamiliesOutcomeCallable ECSClient::ListTaskDefinitionFamiliesCallable(const ListTaskDefinitionFamiliesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTaskDefinitionFamiliesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTaskDefinitionFamilies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListTaskDefinitionFamiliesAsyncHelper(ECSClient const * const clientThis, const ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTaskDefinitionFamilies(request), context);
}

void ECSClient::ListTaskDefinitionFamiliesAsync(const ListTaskDefinitionFamiliesRequest& request, const ListTaskDefinitionFamiliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListTaskDefinitionFamiliesAsyncHelper( this, request, handler, context ); } );
}

ListTaskDefinitionsOutcome ECSClient::ListTaskDefinitions(const ListTaskDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTaskDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTaskDefinitionsOutcomeCallable ECSClient::ListTaskDefinitionsCallable(const ListTaskDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTaskDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTaskDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListTaskDefinitionsAsyncHelper(ECSClient const * const clientThis, const ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTaskDefinitions(request), context);
}

void ECSClient::ListTaskDefinitionsAsync(const ListTaskDefinitionsRequest& request, const ListTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListTaskDefinitionsAsyncHelper( this, request, handler, context ); } );
}

ListTasksOutcome ECSClient::ListTasks(const ListTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTasksOutcomeCallable ECSClient::ListTasksCallable(const ListTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientListTasksAsyncHelper(ECSClient const * const clientThis, const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTasks(request), context);
}

void ECSClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientListTasksAsyncHelper( this, request, handler, context ); } );
}

PutAccountSettingOutcome ECSClient::PutAccountSetting(const PutAccountSettingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAccountSettingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccountSettingOutcomeCallable ECSClient::PutAccountSettingCallable(const PutAccountSettingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSettingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSetting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientPutAccountSettingAsyncHelper(ECSClient const * const clientThis, const PutAccountSettingRequest& request, const PutAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountSetting(request), context);
}

void ECSClient::PutAccountSettingAsync(const PutAccountSettingRequest& request, const PutAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientPutAccountSettingAsyncHelper( this, request, handler, context ); } );
}

PutAccountSettingDefaultOutcome ECSClient::PutAccountSettingDefault(const PutAccountSettingDefaultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAccountSettingDefaultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccountSettingDefaultOutcomeCallable ECSClient::PutAccountSettingDefaultCallable(const PutAccountSettingDefaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSettingDefaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSettingDefault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientPutAccountSettingDefaultAsyncHelper(ECSClient const * const clientThis, const PutAccountSettingDefaultRequest& request, const PutAccountSettingDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountSettingDefault(request), context);
}

void ECSClient::PutAccountSettingDefaultAsync(const PutAccountSettingDefaultRequest& request, const PutAccountSettingDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientPutAccountSettingDefaultAsyncHelper( this, request, handler, context ); } );
}

PutAttributesOutcome ECSClient::PutAttributes(const PutAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAttributesOutcomeCallable ECSClient::PutAttributesCallable(const PutAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientPutAttributesAsyncHelper(ECSClient const * const clientThis, const PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAttributes(request), context);
}

void ECSClient::PutAttributesAsync(const PutAttributesRequest& request, const PutAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientPutAttributesAsyncHelper( this, request, handler, context ); } );
}

PutClusterCapacityProvidersOutcome ECSClient::PutClusterCapacityProviders(const PutClusterCapacityProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutClusterCapacityProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutClusterCapacityProvidersOutcomeCallable ECSClient::PutClusterCapacityProvidersCallable(const PutClusterCapacityProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutClusterCapacityProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutClusterCapacityProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientPutClusterCapacityProvidersAsyncHelper(ECSClient const * const clientThis, const PutClusterCapacityProvidersRequest& request, const PutClusterCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutClusterCapacityProviders(request), context);
}

void ECSClient::PutClusterCapacityProvidersAsync(const PutClusterCapacityProvidersRequest& request, const PutClusterCapacityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientPutClusterCapacityProvidersAsyncHelper( this, request, handler, context ); } );
}

RegisterContainerInstanceOutcome ECSClient::RegisterContainerInstance(const RegisterContainerInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterContainerInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterContainerInstanceOutcomeCallable ECSClient::RegisterContainerInstanceCallable(const RegisterContainerInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterContainerInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterContainerInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientRegisterContainerInstanceAsyncHelper(ECSClient const * const clientThis, const RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterContainerInstance(request), context);
}

void ECSClient::RegisterContainerInstanceAsync(const RegisterContainerInstanceRequest& request, const RegisterContainerInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientRegisterContainerInstanceAsyncHelper( this, request, handler, context ); } );
}

RegisterTaskDefinitionOutcome ECSClient::RegisterTaskDefinition(const RegisterTaskDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterTaskDefinitionOutcomeCallable ECSClient::RegisterTaskDefinitionCallable(const RegisterTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientRegisterTaskDefinitionAsyncHelper(ECSClient const * const clientThis, const RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterTaskDefinition(request), context);
}

void ECSClient::RegisterTaskDefinitionAsync(const RegisterTaskDefinitionRequest& request, const RegisterTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientRegisterTaskDefinitionAsyncHelper( this, request, handler, context ); } );
}

RunTaskOutcome ECSClient::RunTask(const RunTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RunTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunTaskOutcomeCallable ECSClient::RunTaskCallable(const RunTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientRunTaskAsyncHelper(ECSClient const * const clientThis, const RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RunTask(request), context);
}

void ECSClient::RunTaskAsync(const RunTaskRequest& request, const RunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientRunTaskAsyncHelper( this, request, handler, context ); } );
}

StartTaskOutcome ECSClient::StartTask(const StartTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTaskOutcomeCallable ECSClient::StartTaskCallable(const StartTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientStartTaskAsyncHelper(ECSClient const * const clientThis, const StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTask(request), context);
}

void ECSClient::StartTaskAsync(const StartTaskRequest& request, const StartTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientStartTaskAsyncHelper( this, request, handler, context ); } );
}

StopTaskOutcome ECSClient::StopTask(const StopTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTaskOutcomeCallable ECSClient::StopTaskCallable(const StopTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientStopTaskAsyncHelper(ECSClient const * const clientThis, const StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopTask(request), context);
}

void ECSClient::StopTaskAsync(const StopTaskRequest& request, const StopTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientStopTaskAsyncHelper( this, request, handler, context ); } );
}

SubmitAttachmentStateChangesOutcome ECSClient::SubmitAttachmentStateChanges(const SubmitAttachmentStateChangesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SubmitAttachmentStateChangesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitAttachmentStateChangesOutcomeCallable ECSClient::SubmitAttachmentStateChangesCallable(const SubmitAttachmentStateChangesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitAttachmentStateChangesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitAttachmentStateChanges(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientSubmitAttachmentStateChangesAsyncHelper(ECSClient const * const clientThis, const SubmitAttachmentStateChangesRequest& request, const SubmitAttachmentStateChangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SubmitAttachmentStateChanges(request), context);
}

void ECSClient::SubmitAttachmentStateChangesAsync(const SubmitAttachmentStateChangesRequest& request, const SubmitAttachmentStateChangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientSubmitAttachmentStateChangesAsyncHelper( this, request, handler, context ); } );
}

SubmitContainerStateChangeOutcome ECSClient::SubmitContainerStateChange(const SubmitContainerStateChangeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SubmitContainerStateChangeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitContainerStateChangeOutcomeCallable ECSClient::SubmitContainerStateChangeCallable(const SubmitContainerStateChangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitContainerStateChangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitContainerStateChange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientSubmitContainerStateChangeAsyncHelper(ECSClient const * const clientThis, const SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SubmitContainerStateChange(request), context);
}

void ECSClient::SubmitContainerStateChangeAsync(const SubmitContainerStateChangeRequest& request, const SubmitContainerStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientSubmitContainerStateChangeAsyncHelper( this, request, handler, context ); } );
}

SubmitTaskStateChangeOutcome ECSClient::SubmitTaskStateChange(const SubmitTaskStateChangeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SubmitTaskStateChangeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitTaskStateChangeOutcomeCallable ECSClient::SubmitTaskStateChangeCallable(const SubmitTaskStateChangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitTaskStateChangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitTaskStateChange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientSubmitTaskStateChangeAsyncHelper(ECSClient const * const clientThis, const SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SubmitTaskStateChange(request), context);
}

void ECSClient::SubmitTaskStateChangeAsync(const SubmitTaskStateChangeRequest& request, const SubmitTaskStateChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientSubmitTaskStateChangeAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ECSClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ECSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientTagResourceAsyncHelper(ECSClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ECSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ECSClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ECSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUntagResourceAsyncHelper(ECSClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ECSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateCapacityProviderOutcome ECSClient::UpdateCapacityProvider(const UpdateCapacityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCapacityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCapacityProviderOutcomeCallable ECSClient::UpdateCapacityProviderCallable(const UpdateCapacityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCapacityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCapacityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUpdateCapacityProviderAsyncHelper(ECSClient const * const clientThis, const UpdateCapacityProviderRequest& request, const UpdateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCapacityProvider(request), context);
}

void ECSClient::UpdateCapacityProviderAsync(const UpdateCapacityProviderRequest& request, const UpdateCapacityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUpdateCapacityProviderAsyncHelper( this, request, handler, context ); } );
}

UpdateClusterOutcome ECSClient::UpdateCluster(const UpdateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterOutcomeCallable ECSClient::UpdateClusterCallable(const UpdateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUpdateClusterAsyncHelper(ECSClient const * const clientThis, const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCluster(request), context);
}

void ECSClient::UpdateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUpdateClusterAsyncHelper( this, request, handler, context ); } );
}

UpdateClusterSettingsOutcome ECSClient::UpdateClusterSettings(const UpdateClusterSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateClusterSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterSettingsOutcomeCallable ECSClient::UpdateClusterSettingsCallable(const UpdateClusterSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClusterSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUpdateClusterSettingsAsyncHelper(ECSClient const * const clientThis, const UpdateClusterSettingsRequest& request, const UpdateClusterSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateClusterSettings(request), context);
}

void ECSClient::UpdateClusterSettingsAsync(const UpdateClusterSettingsRequest& request, const UpdateClusterSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUpdateClusterSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateContainerAgentOutcome ECSClient::UpdateContainerAgent(const UpdateContainerAgentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateContainerAgentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContainerAgentOutcomeCallable ECSClient::UpdateContainerAgentCallable(const UpdateContainerAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContainerAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContainerAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUpdateContainerAgentAsyncHelper(ECSClient const * const clientThis, const UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContainerAgent(request), context);
}

void ECSClient::UpdateContainerAgentAsync(const UpdateContainerAgentRequest& request, const UpdateContainerAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUpdateContainerAgentAsyncHelper( this, request, handler, context ); } );
}

UpdateContainerInstancesStateOutcome ECSClient::UpdateContainerInstancesState(const UpdateContainerInstancesStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateContainerInstancesStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContainerInstancesStateOutcomeCallable ECSClient::UpdateContainerInstancesStateCallable(const UpdateContainerInstancesStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContainerInstancesStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContainerInstancesState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUpdateContainerInstancesStateAsyncHelper(ECSClient const * const clientThis, const UpdateContainerInstancesStateRequest& request, const UpdateContainerInstancesStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContainerInstancesState(request), context);
}

void ECSClient::UpdateContainerInstancesStateAsync(const UpdateContainerInstancesStateRequest& request, const UpdateContainerInstancesStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUpdateContainerInstancesStateAsyncHelper( this, request, handler, context ); } );
}

UpdateServiceOutcome ECSClient::UpdateService(const UpdateServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceOutcomeCallable ECSClient::UpdateServiceCallable(const UpdateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUpdateServiceAsyncHelper(ECSClient const * const clientThis, const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateService(request), context);
}

void ECSClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUpdateServiceAsyncHelper( this, request, handler, context ); } );
}

UpdateServicePrimaryTaskSetOutcome ECSClient::UpdateServicePrimaryTaskSet(const UpdateServicePrimaryTaskSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServicePrimaryTaskSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServicePrimaryTaskSetOutcomeCallable ECSClient::UpdateServicePrimaryTaskSetCallable(const UpdateServicePrimaryTaskSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServicePrimaryTaskSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServicePrimaryTaskSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUpdateServicePrimaryTaskSetAsyncHelper(ECSClient const * const clientThis, const UpdateServicePrimaryTaskSetRequest& request, const UpdateServicePrimaryTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServicePrimaryTaskSet(request), context);
}

void ECSClient::UpdateServicePrimaryTaskSetAsync(const UpdateServicePrimaryTaskSetRequest& request, const UpdateServicePrimaryTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUpdateServicePrimaryTaskSetAsyncHelper( this, request, handler, context ); } );
}

UpdateTaskSetOutcome ECSClient::UpdateTaskSet(const UpdateTaskSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTaskSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTaskSetOutcomeCallable ECSClient::UpdateTaskSetCallable(const UpdateTaskSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTaskSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTaskSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECSClientUpdateTaskSetAsyncHelper(ECSClient const * const clientThis, const UpdateTaskSetRequest& request, const UpdateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTaskSet(request), context);
}

void ECSClient::UpdateTaskSetAsync(const UpdateTaskSetRequest& request, const UpdateTaskSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECSClientUpdateTaskSetAsyncHelper( this, request, handler, context ); } );
}

