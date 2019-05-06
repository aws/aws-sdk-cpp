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

#include <aws/elasticmapreduce/EMRClient.h>
#include <aws/elasticmapreduce/EMREndpoint.h>
#include <aws/elasticmapreduce/EMRErrorMarshaller.h>
#include <aws/elasticmapreduce/model/AddInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/AddInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/AddJobFlowStepsRequest.h>
#include <aws/elasticmapreduce/model/AddTagsRequest.h>
#include <aws/elasticmapreduce/model/CancelStepsRequest.h>
#include <aws/elasticmapreduce/model/CreateSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DeleteSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DescribeClusterRequest.h>
#include <aws/elasticmapreduce/model/DescribeSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DescribeStepRequest.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsRequest.h>
#include <aws/elasticmapreduce/model/ListClustersRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/ListInstancesRequest.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsRequest.h>
#include <aws/elasticmapreduce/model/ListStepsRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/PutAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveTagsRequest.h>
#include <aws/elasticmapreduce/model/RunJobFlowRequest.h>
#include <aws/elasticmapreduce/model/SetTerminationProtectionRequest.h>
#include <aws/elasticmapreduce/model/SetVisibleToAllUsersRequest.h>
#include <aws/elasticmapreduce/model/TerminateJobFlowsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMR;
using namespace Aws::EMR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "elasticmapreduce";
static const char* ALLOCATION_TAG = "EMRClient";


EMRClient::EMRClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::EMRClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::EMRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::~EMRClient()
{
}

void EMRClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EMREndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void EMRClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddInstanceFleetOutcome EMRClient::AddInstanceFleet(const AddInstanceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddInstanceFleetOutcome(AddInstanceFleetResult(outcome.GetResult()));
  }
  else
  {
    return AddInstanceFleetOutcome(outcome.GetError());
  }
}

AddInstanceFleetOutcomeCallable EMRClient::AddInstanceFleetCallable(const AddInstanceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddInstanceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddInstanceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddInstanceFleetAsync(const AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddInstanceFleetAsyncHelper( request, handler, context ); } );
}

void EMRClient::AddInstanceFleetAsyncHelper(const AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddInstanceFleet(request), context);
}

AddInstanceGroupsOutcome EMRClient::AddInstanceGroups(const AddInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddInstanceGroupsOutcome(AddInstanceGroupsResult(outcome.GetResult()));
  }
  else
  {
    return AddInstanceGroupsOutcome(outcome.GetError());
  }
}

AddInstanceGroupsOutcomeCallable EMRClient::AddInstanceGroupsCallable(const AddInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddInstanceGroupsAsync(const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddInstanceGroupsAsyncHelper( request, handler, context ); } );
}

void EMRClient::AddInstanceGroupsAsyncHelper(const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddInstanceGroups(request), context);
}

AddJobFlowStepsOutcome EMRClient::AddJobFlowSteps(const AddJobFlowStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddJobFlowStepsOutcome(AddJobFlowStepsResult(outcome.GetResult()));
  }
  else
  {
    return AddJobFlowStepsOutcome(outcome.GetError());
  }
}

AddJobFlowStepsOutcomeCallable EMRClient::AddJobFlowStepsCallable(const AddJobFlowStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddJobFlowStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddJobFlowSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddJobFlowStepsAsync(const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddJobFlowStepsAsyncHelper( request, handler, context ); } );
}

void EMRClient::AddJobFlowStepsAsyncHelper(const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddJobFlowSteps(request), context);
}

AddTagsOutcome EMRClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable EMRClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void EMRClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CancelStepsOutcome EMRClient::CancelSteps(const CancelStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelStepsOutcome(CancelStepsResult(outcome.GetResult()));
  }
  else
  {
    return CancelStepsOutcome(outcome.GetError());
  }
}

CancelStepsOutcomeCallable EMRClient::CancelStepsCallable(const CancelStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CancelStepsAsync(const CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelStepsAsyncHelper( request, handler, context ); } );
}

void EMRClient::CancelStepsAsyncHelper(const CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSteps(request), context);
}

CreateSecurityConfigurationOutcome EMRClient::CreateSecurityConfiguration(const CreateSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSecurityConfigurationOutcome(CreateSecurityConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return CreateSecurityConfigurationOutcome(outcome.GetError());
  }
}

CreateSecurityConfigurationOutcomeCallable EMRClient::CreateSecurityConfigurationCallable(const CreateSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CreateSecurityConfigurationAsync(const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSecurityConfigurationAsyncHelper( request, handler, context ); } );
}

void EMRClient::CreateSecurityConfigurationAsyncHelper(const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSecurityConfiguration(request), context);
}

DeleteSecurityConfigurationOutcome EMRClient::DeleteSecurityConfiguration(const DeleteSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSecurityConfigurationOutcome(DeleteSecurityConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSecurityConfigurationOutcome(outcome.GetError());
  }
}

DeleteSecurityConfigurationOutcomeCallable EMRClient::DeleteSecurityConfigurationCallable(const DeleteSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DeleteSecurityConfigurationAsync(const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSecurityConfigurationAsyncHelper( request, handler, context ); } );
}

void EMRClient::DeleteSecurityConfigurationAsyncHelper(const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSecurityConfiguration(request), context);
}

DescribeClusterOutcome EMRClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeClusterOutcome(DescribeClusterResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClusterOutcome(outcome.GetError());
  }
}

DescribeClusterOutcomeCallable EMRClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClusterAsyncHelper( request, handler, context ); } );
}

void EMRClient::DescribeClusterAsyncHelper(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCluster(request), context);
}

DescribeSecurityConfigurationOutcome EMRClient::DescribeSecurityConfiguration(const DescribeSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSecurityConfigurationOutcome(DescribeSecurityConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSecurityConfigurationOutcome(outcome.GetError());
  }
}

DescribeSecurityConfigurationOutcomeCallable EMRClient::DescribeSecurityConfigurationCallable(const DescribeSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeSecurityConfigurationAsync(const DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSecurityConfigurationAsyncHelper( request, handler, context ); } );
}

void EMRClient::DescribeSecurityConfigurationAsyncHelper(const DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecurityConfiguration(request), context);
}

DescribeStepOutcome EMRClient::DescribeStep(const DescribeStepRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStepOutcome(DescribeStepResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStepOutcome(outcome.GetError());
  }
}

DescribeStepOutcomeCallable EMRClient::DescribeStepCallable(const DescribeStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeStepAsync(const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStepAsyncHelper( request, handler, context ); } );
}

void EMRClient::DescribeStepAsyncHelper(const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStep(request), context);
}

ListBootstrapActionsOutcome EMRClient::ListBootstrapActions(const ListBootstrapActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBootstrapActionsOutcome(ListBootstrapActionsResult(outcome.GetResult()));
  }
  else
  {
    return ListBootstrapActionsOutcome(outcome.GetError());
  }
}

ListBootstrapActionsOutcomeCallable EMRClient::ListBootstrapActionsCallable(const ListBootstrapActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBootstrapActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBootstrapActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListBootstrapActionsAsync(const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBootstrapActionsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListBootstrapActionsAsyncHelper(const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBootstrapActions(request), context);
}

ListClustersOutcome EMRClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListClustersOutcome(ListClustersResult(outcome.GetResult()));
  }
  else
  {
    return ListClustersOutcome(outcome.GetError());
  }
}

ListClustersOutcomeCallable EMRClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListClustersAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListClustersAsyncHelper(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListClusters(request), context);
}

ListInstanceFleetsOutcome EMRClient::ListInstanceFleets(const ListInstanceFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInstanceFleetsOutcome(ListInstanceFleetsResult(outcome.GetResult()));
  }
  else
  {
    return ListInstanceFleetsOutcome(outcome.GetError());
  }
}

ListInstanceFleetsOutcomeCallable EMRClient::ListInstanceFleetsCallable(const ListInstanceFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstanceFleetsAsync(const ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceFleetsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListInstanceFleetsAsyncHelper(const ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceFleets(request), context);
}

ListInstanceGroupsOutcome EMRClient::ListInstanceGroups(const ListInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInstanceGroupsOutcome(ListInstanceGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListInstanceGroupsOutcome(outcome.GetError());
  }
}

ListInstanceGroupsOutcomeCallable EMRClient::ListInstanceGroupsCallable(const ListInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstanceGroupsAsync(const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceGroupsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListInstanceGroupsAsyncHelper(const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceGroups(request), context);
}

ListInstancesOutcome EMRClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInstancesOutcome(ListInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListInstancesOutcome(outcome.GetError());
  }
}

ListInstancesOutcomeCallable EMRClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstancesAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListInstancesAsyncHelper(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstances(request), context);
}

ListSecurityConfigurationsOutcome EMRClient::ListSecurityConfigurations(const ListSecurityConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSecurityConfigurationsOutcome(ListSecurityConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return ListSecurityConfigurationsOutcome(outcome.GetError());
  }
}

ListSecurityConfigurationsOutcomeCallable EMRClient::ListSecurityConfigurationsCallable(const ListSecurityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListSecurityConfigurationsAsync(const ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSecurityConfigurationsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListSecurityConfigurationsAsyncHelper(const ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSecurityConfigurations(request), context);
}

ListStepsOutcome EMRClient::ListSteps(const ListStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListStepsOutcome(ListStepsResult(outcome.GetResult()));
  }
  else
  {
    return ListStepsOutcome(outcome.GetError());
  }
}

ListStepsOutcomeCallable EMRClient::ListStepsCallable(const ListStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListStepsAsync(const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStepsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListStepsAsyncHelper(const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSteps(request), context);
}

ModifyInstanceFleetOutcome EMRClient::ModifyInstanceFleet(const ModifyInstanceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyInstanceFleetOutcome(NoResult());
  }
  else
  {
    return ModifyInstanceFleetOutcome(outcome.GetError());
  }
}

ModifyInstanceFleetOutcomeCallable EMRClient::ModifyInstanceFleetCallable(const ModifyInstanceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ModifyInstanceFleetAsync(const ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstanceFleetAsyncHelper( request, handler, context ); } );
}

void EMRClient::ModifyInstanceFleetAsyncHelper(const ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceFleet(request), context);
}

ModifyInstanceGroupsOutcome EMRClient::ModifyInstanceGroups(const ModifyInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyInstanceGroupsOutcome(NoResult());
  }
  else
  {
    return ModifyInstanceGroupsOutcome(outcome.GetError());
  }
}

ModifyInstanceGroupsOutcomeCallable EMRClient::ModifyInstanceGroupsCallable(const ModifyInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ModifyInstanceGroupsAsync(const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstanceGroupsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ModifyInstanceGroupsAsyncHelper(const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceGroups(request), context);
}

PutAutoScalingPolicyOutcome EMRClient::PutAutoScalingPolicy(const PutAutoScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutAutoScalingPolicyOutcome(PutAutoScalingPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutAutoScalingPolicyOutcome(outcome.GetError());
  }
}

PutAutoScalingPolicyOutcomeCallable EMRClient::PutAutoScalingPolicyCallable(const PutAutoScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAutoScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAutoScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::PutAutoScalingPolicyAsync(const PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAutoScalingPolicyAsyncHelper( request, handler, context ); } );
}

void EMRClient::PutAutoScalingPolicyAsyncHelper(const PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAutoScalingPolicy(request), context);
}

RemoveAutoScalingPolicyOutcome EMRClient::RemoveAutoScalingPolicy(const RemoveAutoScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveAutoScalingPolicyOutcome(RemoveAutoScalingPolicyResult(outcome.GetResult()));
  }
  else
  {
    return RemoveAutoScalingPolicyOutcome(outcome.GetError());
  }
}

RemoveAutoScalingPolicyOutcomeCallable EMRClient::RemoveAutoScalingPolicyCallable(const RemoveAutoScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAutoScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAutoScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveAutoScalingPolicyAsync(const RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveAutoScalingPolicyAsyncHelper( request, handler, context ); } );
}

void EMRClient::RemoveAutoScalingPolicyAsyncHelper(const RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveAutoScalingPolicy(request), context);
}

RemoveTagsOutcome EMRClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(RemoveTagsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable EMRClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void EMRClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

RunJobFlowOutcome EMRClient::RunJobFlow(const RunJobFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RunJobFlowOutcome(RunJobFlowResult(outcome.GetResult()));
  }
  else
  {
    return RunJobFlowOutcome(outcome.GetError());
  }
}

RunJobFlowOutcomeCallable EMRClient::RunJobFlowCallable(const RunJobFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunJobFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunJobFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RunJobFlowAsync(const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RunJobFlowAsyncHelper( request, handler, context ); } );
}

void EMRClient::RunJobFlowAsyncHelper(const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunJobFlow(request), context);
}

SetTerminationProtectionOutcome EMRClient::SetTerminationProtection(const SetTerminationProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetTerminationProtectionOutcome(NoResult());
  }
  else
  {
    return SetTerminationProtectionOutcome(outcome.GetError());
  }
}

SetTerminationProtectionOutcomeCallable EMRClient::SetTerminationProtectionCallable(const SetTerminationProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTerminationProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTerminationProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::SetTerminationProtectionAsync(const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetTerminationProtectionAsyncHelper( request, handler, context ); } );
}

void EMRClient::SetTerminationProtectionAsyncHelper(const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTerminationProtection(request), context);
}

SetVisibleToAllUsersOutcome EMRClient::SetVisibleToAllUsers(const SetVisibleToAllUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetVisibleToAllUsersOutcome(NoResult());
  }
  else
  {
    return SetVisibleToAllUsersOutcome(outcome.GetError());
  }
}

SetVisibleToAllUsersOutcomeCallable EMRClient::SetVisibleToAllUsersCallable(const SetVisibleToAllUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetVisibleToAllUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetVisibleToAllUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::SetVisibleToAllUsersAsync(const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetVisibleToAllUsersAsyncHelper( request, handler, context ); } );
}

void EMRClient::SetVisibleToAllUsersAsyncHelper(const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetVisibleToAllUsers(request), context);
}

TerminateJobFlowsOutcome EMRClient::TerminateJobFlows(const TerminateJobFlowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TerminateJobFlowsOutcome(NoResult());
  }
  else
  {
    return TerminateJobFlowsOutcome(outcome.GetError());
  }
}

TerminateJobFlowsOutcomeCallable EMRClient::TerminateJobFlowsCallable(const TerminateJobFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateJobFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateJobFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::TerminateJobFlowsAsync(const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateJobFlowsAsyncHelper( request, handler, context ); } );
}

void EMRClient::TerminateJobFlowsAsyncHelper(const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateJobFlows(request), context);
}

